
#ifndef VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT_H
#define VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT_H

#ifdef VTKPVSERVERIMPLEMENTATIONRENDERING_STATIC_DEFINE
#  define VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT
#  define VTKPVSERVERIMPLEMENTATIONRENDERING_NO_EXPORT
#else
#  ifndef VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT
#    ifdef vtkPVServerImplementationRendering_EXPORTS
        /* We are building this library */
#      define VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVSERVERIMPLEMENTATIONRENDERING_NO_EXPORT
#    define VTKPVSERVERIMPLEMENTATIONRENDERING_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVSERVERIMPLEMENTATIONRENDERING_DEPRECATED
#  define VTKPVSERVERIMPLEMENTATIONRENDERING_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVSERVERIMPLEMENTATIONRENDERING_DEPRECATED_EXPORT VTKPVSERVERIMPLEMENTATIONRENDERING_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVSERVERIMPLEMENTATIONRENDERING_DEPRECATED_NO_EXPORT VTKPVSERVERIMPLEMENTATIONRENDERING_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVSERVERIMPLEMENTATIONRENDERING_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVClientServerCoreRenderingModule.h"
#include "vtkPVServerImplementationCoreModule.h"

#endif