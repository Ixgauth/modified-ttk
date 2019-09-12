
#ifndef VTKPVVTKEXTENSIONSRENDERING_EXPORT_H
#define VTKPVVTKEXTENSIONSRENDERING_EXPORT_H

#ifdef VTKPVVTKEXTENSIONSRENDERING_STATIC_DEFINE
#  define VTKPVVTKEXTENSIONSRENDERING_EXPORT
#  define VTKPVVTKEXTENSIONSRENDERING_NO_EXPORT
#else
#  ifndef VTKPVVTKEXTENSIONSRENDERING_EXPORT
#    ifdef vtkPVVTKExtensionsRendering_EXPORTS
        /* We are building this library */
#      define VTKPVVTKEXTENSIONSRENDERING_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPVVTKEXTENSIONSRENDERING_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPVVTKEXTENSIONSRENDERING_NO_EXPORT
#    define VTKPVVTKEXTENSIONSRENDERING_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPVVTKEXTENSIONSRENDERING_DEPRECATED
#  define VTKPVVTKEXTENSIONSRENDERING_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSRENDERING_DEPRECATED_EXPORT VTKPVVTKEXTENSIONSRENDERING_EXPORT __attribute__ ((__deprecated__))
#  define VTKPVVTKEXTENSIONSRENDERING_DEPRECATED_NO_EXPORT VTKPVVTKEXTENSIONSRENDERING_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKPVVTKEXTENSIONSRENDERING_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkChartsCoreModule.h"
#include "vtkFiltersExtractionModule.h"
#include "vtkFiltersHyperTreeModule.h"
#include "vtkFiltersParallelModule.h"
#include "vtkIOExportModule.h"
#include "vtkIOExportOpenGL2Module.h"
#include "vtkIOImageModule.h"
#include "vtkInteractionStyleModule.h"
#include "vtkInteractionWidgetsModule.h"
#include "vtkPVVTKExtensionsCoreModule.h"
#include "vtkRenderingAnnotationModule.h"
#include "vtkRenderingContextOpenGL2Module.h"
#include "vtkRenderingFreeTypeModule.h"
#include "vtkRenderingMatplotlibModule.h"
#include "vtkRenderingOpenGL2Module.h"
#include "vtkRenderingParallelModule.h"
#include "vtkRenderingVolumeAMRModule.h"

#endif
