""" This module loads the entire VTK library into its namespace.  It
also allows one to use specific packages inside the vtk directory.."""

from __future__ import absolute_import

# --------------------------------------
from .vtkCommonCore import *
from .vtkCommonMath import *
from .vtkCommonMisc import *
from .vtkCommonSystem import *
from .vtkCommonTransforms import *
from .vtkCommonDataModel import *
from .vtkCommonExecutionModel import *
from .vtkFiltersCore import *
from .vtkCommonComputationalGeometry import *
from .vtkFiltersGeneral import *
from .vtkImagingCore import *
from .vtkImagingFourier import *
from .vtkFiltersStatistics import *
from .vtkFiltersExtraction import *
from .vtkFiltersSources import *
from .vtkCommonColor import *
from .vtkFiltersGeometry import *
from .vtkRenderingCore import *
from .vtkInteractionStyle import *
from .vtkRenderingOpenGL2 import *
from .vtkFiltersModeling import *
from .vtkIOCore import *
from .vtkIOLegacy import *
from .vtkParallelCore import *
from .vtkFiltersParallel import *
from .vtkFiltersProgrammable import *
from .vtkPythonInterpreter import *
from .vtkClientServer import *
from .vtkIOXMLParser import *
from .vtkPVCommon import *
from .vtkIOImage import *
from .vtkPVVTKExtensionsCore import *
from .vtkPVVTKExtensionsSIL import *
from .vtkPVClientServerCoreCore import *
from .vtkPVServerImplementationCore import *
from .vtkPVServerManagerCore import *
from .vtkIOMovie import *
from .vtkIOXML import *
from .vtkInfovisCore import *
from .vtkIOInfovis import *
from .vtkAcceleratorsVTKm import *
from .vtkDomainsChemistry import *
from .vtkFiltersAMR import *
from .vtkRenderingFreeType import *
from .vtkRenderingContext2D import *
from .vtkChartsCore import *
from .vtkFiltersParallelStatistics import *
from .vtkIOEnSight import *
from .vtkIOImport import *
from .vtkIOPLY import *
from .vtkIOGeometry import *
from .vtkIONetCDF import *
from .vtkIOParallel import *
from .vtkIOExodus import *
from .vtkIOParallelExodus import *
from .vtkIOParallelXML import *
from .vtkImagingSources import *
from .vtkFiltersHybrid import *
from .vtkImagingColor import *
from .vtkImagingGeneral import *
from .vtkImagingHybrid import *
from .vtkRenderingAnnotation import *
from .vtkRenderingVolume import *
from .vtkInteractionWidgets import *
from .vtkFiltersGeneric import *
from .vtkFiltersHyperTree import *
from .vtkRenderingGL2PSOpenGL2 import *
from .vtkIOExport import *
from .vtkIOExportOpenGL2 import *
from .vtkRenderingContextOpenGL2 import *
from .vtkRenderingMatplotlib import *
from .vtkRenderingParallel import *
from .vtkImagingMath import *
from .vtkRenderingVolumeOpenGL2 import *
from .vtkRenderingVolumeAMR import *
from .vtkPVVTKExtensionsRendering import *
from .vtkPVVTKExtensionsDefault import *
from .vtkRenderingLabel import *
from .vtkViewsCore import *
from .vtkViewsContext2D import *
from .vtkPVClientServerCoreRendering import *
from .vtkPVClientServerCoreDefault import *
from .vtkPVServerImplementationRendering import *
from .vtkPVServerManagerRendering import *
from .vtkTestingRendering import *
from .vtkPVServerManagerDefault import *
from .vtkPVAnimation import *
from .vtkDomainsChemistryOpenGL2 import *
from .vtkFiltersFlowPaths import *
from .vtkFiltersVerdict import *
from .vtkFiltersParallelVerdict import *
from .vtkFiltersPython import *
from .vtkFiltersTexture import *
from .vtkIOAMR import *
from .vtkIOAsynchronous import *
from .vtkIOMotionFX import *
from .vtkIOLSDyna import *
from .vtkIOParallelLSDyna import *
from .vtkIOSegY import *
from .vtkIOTRUCHAS import *
from .vtkIOTecplotTable import *
from .vtkIOVPIC import *
from .vtkIOVeraOut import *
from .vtkIOXdmf2 import *
from .vtkImagingMorphological import *
from .vtkInteractionImage import *
from .vtkPVCinemaReader import *
from .vtkPVPythonAlgorithm import *
from .vtkPVVTKExtensionsCGNSReader import *
from .vtkPVVTKExtensionsCGNSWriter import *
from .vtkPVVTKExtensionsH5PartReader import *
from .vtkFiltersPoints import *
from .vtkPVVTKExtensionsPoints import *
from .vtkRenderingLICOpenGL2 import *
from .vtkRenderingLOD import *
from .vtkPVServerManagerApplication import *
from .vtkPVCatalyst import *
from .vtkWebGLExporter import *
from .vtkWebCore import *
from .vtkParaViewWebCore import *
# --------------------------------------

# useful macro for getting type names
from .util.vtkConstants import vtkImageScalarTypeNameMacro

# import convenience decorators
from .util.misc import calldata_type

# import the vtkVariant helpers
from .util.vtkVariant import *