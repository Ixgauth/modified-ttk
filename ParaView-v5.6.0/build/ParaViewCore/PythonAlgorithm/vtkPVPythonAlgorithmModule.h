
#ifndef VTKPVPYTHONALGORITHM_EXPORT_H
#define VTKPVPYTHONALGORITHM_EXPORT_H

#ifdef VTKPVPYTHONALGORITHM_STATIC_DEFINE
#  define VTKPVPYTHONALGORITHM_EXPORT
#  define VTKPVPYTHONALGORITHM_NO_EXPORT
#else
#  ifndef VTKPVPYTHONALGORITHM_EXPORT
#    ifdef vtkPVPythonAlgorithm_EXPORTS
        /* We are building this library */
#      define VTKPVPYTHONALGORITHM_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVPYTHONALGORITHM_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVPYTHONALGORITHM_NO_EXPORT
#    define VTKPVPYTHONALGORITHM_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVPYTHONALGORITHM_DEPRECATED
#  define VTKPVPYTHONALGORITHM_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVPYTHONALGORITHM_DEPRECATED_EXPORT VTKPVPYTHONALGORITHM_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVPYTHONALGORITHM_DEPRECATED_NO_EXPORT VTKPVPYTHONALGORITHM_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVPYTHONALGORITHM_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVServerImplementationCoreModule.h"

#endif
