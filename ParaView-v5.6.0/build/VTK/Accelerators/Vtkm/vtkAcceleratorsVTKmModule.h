
#ifndef VTKACCELERATORSVTKM_EXPORT_H
#define VTKACCELERATORSVTKM_EXPORT_H

#ifdef VTKACCELERATORSVTKM_STATIC_DEFINE
#  define VTKACCELERATORSVTKM_EXPORT
#  define VTKACCELERATORSVTKM_NO_EXPORT
#else
#  ifndef VTKACCELERATORSVTKM_EXPORT
#    ifdef vtkAcceleratorsVTKm_EXPORTS
        /* We are building this library */
#      define VTKACCELERATORSVTKM_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKACCELERATORSVTKM_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKACCELERATORSVTKM_NO_EXPORT
#    define VTKACCELERATORSVTKM_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKACCELERATORSVTKM_DEPRECATED
#  define VTKACCELERATORSVTKM_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKACCELERATORSVTKM_DEPRECATED_EXPORT VTKACCELERATORSVTKM_EXPORT __attribute__ ((__deprecated__))
#  define VTKACCELERATORSVTKM_DEPRECATED_NO_EXPORT VTKACCELERATORSVTKM_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKACCELERATORSVTKM_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersGeneralModule.h"

#endif
