
#ifndef VTKPVCINEMAREADER_EXPORT_H
#define VTKPVCINEMAREADER_EXPORT_H

#ifdef VTKPVCINEMAREADER_STATIC_DEFINE
#  define VTKPVCINEMAREADER_EXPORT
#  define VTKPVCINEMAREADER_NO_EXPORT
#else
#  ifndef VTKPVCINEMAREADER_EXPORT
#    ifdef vtkPVCinemaReader_EXPORTS
        /* We are building this library */
#      define VTKPVCINEMAREADER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVCINEMAREADER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVCINEMAREADER_NO_EXPORT
#    define VTKPVCINEMAREADER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVCINEMAREADER_DEPRECATED
#  define VTKPVCINEMAREADER_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVCINEMAREADER_DEPRECATED_EXPORT VTKPVCINEMAREADER_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVCINEMAREADER_DEPRECATED_NO_EXPORT VTKPVCINEMAREADER_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVCINEMAREADER_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkPVServerManagerCoreModule.h"
#include "vtkRenderingCoreModule.h"

#endif
