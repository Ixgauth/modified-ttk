
#ifndef VTKPVVTKEXTENSIONSPOINTS_EXPORT_H
#define VTKPVVTKEXTENSIONSPOINTS_EXPORT_H

#ifdef VTKPVVTKEXTENSIONSPOINTS_STATIC_DEFINE
#  define VTKPVVTKEXTENSIONSPOINTS_EXPORT
#  define VTKPVVTKEXTENSIONSPOINTS_NO_EXPORT
#else
#  ifndef VTKPVVTKEXTENSIONSPOINTS_EXPORT
#    ifdef vtkPVVTKExtensionsPoints_EXPORTS
        /* We are building this library */
#      define VTKPVVTKEXTENSIONSPOINTS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVVTKEXTENSIONSPOINTS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVVTKEXTENSIONSPOINTS_NO_EXPORT
#    define VTKPVVTKEXTENSIONSPOINTS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVVTKEXTENSIONSPOINTS_DEPRECATED
#  define VTKPVVTKEXTENSIONSPOINTS_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSPOINTS_DEPRECATED_EXPORT VTKPVVTKEXTENSIONSPOINTS_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSPOINTS_DEPRECATED_NO_EXPORT VTKPVVTKEXTENSIONSPOINTS_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVVTKEXTENSIONSPOINTS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersPointsModule.h"

#endif
