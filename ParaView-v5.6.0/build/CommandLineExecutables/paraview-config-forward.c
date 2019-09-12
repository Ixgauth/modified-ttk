/*=========================================================================

Program:   ParaView
Module:    pv-forward.c.in

Copyright (c) Kitware, Inc.
All rights reserved.
See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#define vtksys_SHARED_FORWARD_DIR_BUILD "/home/ian/ttk/ParaView-v5.6.0/build/bin"
#define vtksys_SHARED_FORWARD_PATH_BUILD "/home/ian/ttk/ParaView-v5.6.0/build/bin"
#define vtksys_SHARED_FORWARD_PATH_INSTALL "../lib"
#define vtksys_SHARED_FORWARD_EXE_BUILD "/home/ian/ttk/ParaView-v5.6.0/build/bin/paraview-config"
#define vtksys_SHARED_FORWARD_EXE_INSTALL "../lib/paraview-config"
#define vtksys_SHARED_FORWARD_OPTION_PRINT "--print"
#define vtksys_SHARED_FORWARD_OPTION_LDD "--ldd"

#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <vtksys/SharedForward.h>

int get_driver_cache_user_path(char *driver_cache_path)
{
  const char *home = getenv("HOME");
  if (!home)
    {
    home = getpwuid(getuid())->pw_dir;
    }
  if (!home)
    {
    return 0;
    }
  strncpy(driver_cache_path, home, strlen(home) + 1);
  strcat(driver_cache_path, "/.config/ParaView/ParaViewMesaConfig.ini");
  //fprintf(stdout, "User cache = %s\n", driver_cache_path);
  return 1;
}

int get_driver_cache_site_path(const char *this_exe_path,
  char *driver_cache_path)
{
  // Get directory containing true paraview executable.
  char self_path[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char throwaway_ldpath[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char exe[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };

  kwsys_shared_forward_self_path(this_exe_path, self_path);
  kwsys_shared_forward_get_settings(self_path, throwaway_ldpath, exe);

  char driver_install_path[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char *last_slash = strrchr(exe, '/');
  if (last_slash)
    {
    strncpy(driver_install_path, exe, last_slash - exe + 1);

    strcat(driver_cache_path, driver_install_path);
    strcat(driver_cache_path, "ParaViewMesaConfig.ini");
    //fprintf(stdout, "Site cache = %s\n", driver_cache_path);
    return 1;
    }
  return 0;
}

int append_driver_to_ldpath(const char *this_exe_path, const char *driver)
{
  char self_path[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char throwaway_ldpath[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char exe[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };

  // Use default native driver, so don't update LD_LIBRARY_PATH
  if (!driver || (driver && driver[0] == '\0'))
    {
    return 0;
    }

  kwsys_shared_forward_self_path(this_exe_path, self_path);
  kwsys_shared_forward_get_settings(self_path, throwaway_ldpath, exe);

  char driver_install_path[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  char *last_slash = strrchr(exe, '/');
  if (last_slash)
    {
    strncpy(driver_install_path, exe, last_slash - exe + 1);

    strcat(kwsys_shared_forward_ldpath, driver_install_path);
    strcat(kwsys_shared_forward_ldpath, driver);
    strcat(kwsys_shared_forward_ldpath, kwsys_shared_forward_path_sep);

    // Checks
    //fprintf(stdout, "driver_install_path = %s\n", driver_install_path);
    //fprintf(stdout, "kwsys_shared_forward_ldpath = %s\n",
    //    kwsys_shared_forward_ldpath);
    return 1;
    }
  return 0;
}

int choose_driver(const char *this_exe_path, const char *driver, int print)
{
  if (driver == NULL || driver[0] == '\0')
    {
    return 0;
    }
  if (strcmp(driver, "mesa") == 0)
    {
    // here we don't specify any GALLIUM_DRIVER and let user
    // setup the environment on their own.
    append_driver_to_ldpath(this_exe_path, "mesa");
    }
  if (strcmp(driver, "mesa-llvm") == 0)
    {
    if (print == 1)
      {
      printf("GALLIUM_DRIVER=llvmpipe\n");
      }
    setenv("GALLIUM_DRIVER", "llvmpipe", /*overwrite=*/ 1);
    append_driver_to_ldpath(this_exe_path, "mesa");
    }
  else if (strcmp(driver, "mesa-swr-avx") == 0   ||
           strcmp(driver, "mesa-swr-avx2") == 0  ||
           strcmp(driver, "mesa-swr") == 0)
    {
    if (print == 1)
      {
      printf("GALLIUM_DRIVER=swr\n");
      }
    setenv("GALLIUM_DRIVER", "swr", /*overwrite=*/ 1);
    append_driver_to_ldpath(this_exe_path, "mesa");
    }
  return 0;
}

#define MAX_DRIVER_CHOICE 32

int main(int argc, char** argv)
{
  int i = 0;
  int true_argc = 0;
  char **true_argv = malloc((argc + 1) * sizeof(char*));
  int result = 0;
  FILE *driver_cache = NULL;
  char driver_choice[MAX_DRIVER_CHOICE] = { 0 };
  char driver_cache_path[KWSYS_SHARED_FORWARD_MAXPATH] = { 0 };
  int print = 0;

  true_argv[argc] = NULL;

  // Check for site-wide config first
  get_driver_cache_site_path(argv[0], driver_cache_path);
  driver_cache = fopen(driver_cache_path, "r");
  if (driver_cache)
    {
    if (fgets(driver_choice, sizeof(driver_choice), driver_cache) == 0)
      {
      driver_choice[0] = 0;
      }
    fclose(driver_cache);
    }

  // If there is a user config, override the site config
  get_driver_cache_user_path(driver_cache_path);
  driver_cache = fopen(driver_cache_path, "r");
  if (driver_cache)
    {
    if (fgets(driver_choice, sizeof(driver_choice), driver_cache) == 0)
      {
      driver_choice[0] = 0;
      }
    fclose(driver_cache);
    }

  // Check for a newline in the driver name
  char *newline = strchr(driver_choice, '\n');
  if (newline)
    {
    *newline = '\0';
    }

  // Check for single-run driver specification; forward all other args
  for (; i < argc; ++i)
    {
    if (strcmp(argv[i], "--native") == 0)
      {
      driver_choice[0] = '\0';
      }
    else if (strcmp(argv[i], "--mesa-llvm") == 0      ||
             strcmp(argv[i], "--mesa-swr-avx") == 0   ||
             strcmp(argv[i], "--mesa-swr-avx2") == 0  ||
             strcmp(argv[i], "--mesa-swr") == 0       ||
             strcmp(argv[i], "--mesa") == 0)
      {
      strncpy(driver_choice, argv[i] + 2, MAX_DRIVER_CHOICE);
      }
    else
      {
      if (strcmp(argv[i], "--print") == 0)
        {
        print = 1;
        }
      true_argv[true_argc] = argv[i];
      true_argc++;
      }
    }
  true_argv[true_argc] = NULL;

  choose_driver(argv[0], driver_choice, print);
  result = vtksys_shared_forward_to_real(true_argc, true_argv);
  free(true_argv);
  return result;
}
