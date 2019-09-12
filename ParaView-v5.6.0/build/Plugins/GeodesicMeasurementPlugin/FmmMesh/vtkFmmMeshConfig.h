#ifndef _vtkFmmMeshConfig_h
#define _vtkFmmMeshConfig_h

/*
   Static or shared lib flags
*/
/* #undef VTKFMMMESH_BUILD_SHARED_LIBS */

#ifdef _WIN32

  #ifndef VTKFMMMESH_BUILD_SHARED_LIBS // static lib
  #  define FMMMESH_EXPORT
  #else
  #  ifdef FmmMesh_EXPORTS // dynamic lib - must export/import symbols
  #    define FMMMESH_EXPORT __declspec(dllexport)
  #  else
  #    define FMMMESH_EXPORT __declspec(dllimport)
  #  endif
  #endif

#else
  // Compiler that is not MS Visual C++.
  // Ensure that the export symbol is defined (and blank)
  #define FMMMESH_EXPORT
#endif

#endif
