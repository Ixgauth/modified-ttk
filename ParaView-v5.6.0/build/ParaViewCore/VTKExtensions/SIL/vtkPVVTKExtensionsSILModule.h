
#ifndef VTKPVVTKEXTENSIONSSIL_EXPORT_H
#define VTKPVVTKEXTENSIONSSIL_EXPORT_H

#ifdef VTKPVVTKEXTENSIONSSIL_STATIC_DEFINE
#  define VTKPVVTKEXTENSIONSSIL_EXPORT
#  define VTKPVVTKEXTENSIONSSIL_NO_EXPORT
#else
#  ifndef VTKPVVTKEXTENSIONSSIL_EXPORT
#    ifdef vtkPVVTKExtensionsSIL_EXPORTS
        /* We are building this library */
#      define VTKPVVTKEXTENSIONSSIL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVVTKEXTENSIONSSIL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVVTKEXTENSIONSSIL_NO_EXPORT
#    define VTKPVVTKEXTENSIONSSIL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVVTKEXTENSIONSSIL_DEPRECATED
#  define VTKPVVTKEXTENSIONSSIL_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSSIL_DEPRECATED_EXPORT VTKPVVTKEXTENSIONSSIL_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSSIL_DEPRECATED_NO_EXPORT VTKPVVTKEXTENSIONSSIL_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVVTKEXTENSIONSSIL_NO_DEPRECATED
#endif



#endif
