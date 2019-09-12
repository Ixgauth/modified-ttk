
#ifndef VTKNETCDFCPP_EXPORT_H
#define VTKNETCDFCPP_EXPORT_H

#ifdef VTKNETCDFCPP_STATIC_DEFINE
#  define VTKNETCDFCPP_EXPORT
#  define VTKNETCDFCPP_NO_EXPORT
#else
#  ifndef VTKNETCDFCPP_EXPORT
#    ifdef vtknetcdfcpp_EXPORTS
        /* We are building this library */
#      define VTKNETCDFCPP_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKNETCDFCPP_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKNETCDFCPP_NO_EXPORT
#    define VTKNETCDFCPP_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKNETCDFCPP_DEPRECATED
#  define VTKNETCDFCPP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKNETCDFCPP_DEPRECATED_EXPORT
#  define VTKNETCDFCPP_DEPRECATED_EXPORT VTKNETCDFCPP_EXPORT VTKNETCDFCPP_DEPRECATED
#endif

#ifndef VTKNETCDFCPP_DEPRECATED_NO_EXPORT
#  define VTKNETCDFCPP_DEPRECATED_NO_EXPORT VTKNETCDFCPP_NO_EXPORT VTKNETCDFCPP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKNETCDFCPP_NO_DEPRECATED
#    define VTKNETCDFCPP_NO_DEPRECATED
#  endif
#endif

#endif
