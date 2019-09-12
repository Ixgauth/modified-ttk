SET(CTEST_CUSTOM_MEMCHECK_IGNORE
  ${CTEST_CUSTOM_MEMCHECK_IGNORE}
  Example-vtkLocal
  Example-vtkMy

  # These tests do not run any VTK code
  vtkAcceleratorsVTKm-HeaderTest
  vtkChartsCore-HeaderTest
  vtkCommonColor-HeaderTest
  vtkCommonComputationalGeometry-HeaderTest
  vtkCommonCore-HeaderTest
  vtkCommonDataModel-HeaderTest
  vtkCommonExecutionModel-HeaderTest
  vtkCommonMath-HeaderTest
  vtkCommonMisc-HeaderTest
  vtkCommonSystem-HeaderTest
  vtkCommonTransforms-HeaderTest
  vtkDomainsChemistry-HeaderTest
  vtkDomainsChemistryOpenGL2-HeaderTest
  vtkDomainsMicroscopy-HeaderTest
  vtkDomainsParallelChemistry-HeaderTest
  vtkFiltersAMR-HeaderTest
  vtkFiltersCore-HeaderTest
  vtkFiltersExtraction-HeaderTest
  vtkFiltersFlowPaths-HeaderTest
  vtkFiltersGeneral-HeaderTest
  vtkFiltersGeneric-HeaderTest
  vtkFiltersGeometry-HeaderTest
  vtkFiltersHybrid-HeaderTest
  vtkFiltersHyperTree-HeaderTest
  vtkFiltersImaging-HeaderTest
  vtkFiltersModeling-HeaderTest
  vtkFiltersOpenTurns-HeaderTest
  vtkFiltersParallel-HeaderTest
  vtkFiltersParallelDIY2-HeaderTest
  vtkFiltersParallelFlowPaths-HeaderTest
  vtkFiltersParallelGeometry-HeaderTest
  vtkFiltersParallelImaging-HeaderTest
  vtkFiltersParallelMPI-HeaderTest
  vtkFiltersParallelStatistics-HeaderTest
  vtkFiltersParallelVerdict-HeaderTest
  vtkFiltersPoints-HeaderTest
  vtkFiltersProgrammable-HeaderTest
  vtkFiltersPython-HeaderTest
  vtkFiltersReebGraph-HeaderTest
  vtkFiltersSMP-HeaderTest
  vtkFiltersSelection-HeaderTest
  vtkFiltersSources-HeaderTest
  vtkFiltersStatistics-HeaderTest
  vtkFiltersTexture-HeaderTest
  vtkFiltersTopology-HeaderTest
  vtkFiltersVerdict-HeaderTest
  vtkGUISupportQt-HeaderTest
  vtkGUISupportQtOpenGL-HeaderTest
  vtkGUISupportQtSQL-HeaderTest
  vtkGUISupportQtWebkit-HeaderTest
  vtkGeovisCore-HeaderTest
  vtkGeovisGDAL-HeaderTest
  vtkIOADIOS-HeaderTest
  vtkIOAMR-HeaderTest
  vtkIOAsynchronous-HeaderTest
  vtkIOCore-HeaderTest
  vtkIOEnSight-HeaderTest
  vtkIOExodus-HeaderTest
  vtkIOExport-HeaderTest
  vtkIOExportOpenGL2-HeaderTest
  vtkIOExportPDF-HeaderTest
  vtkIOFFMPEG-HeaderTest
  vtkIOGDAL-HeaderTest
  vtkIOGeoJSON-HeaderTest
  vtkIOGeometry-HeaderTest
  vtkIOImage-HeaderTest
  vtkIOImport-HeaderTest
  vtkIOInfovis-HeaderTest
  vtkIOLAS-HeaderTest
  vtkIOLSDyna-HeaderTest
  vtkIOLegacy-HeaderTest
  vtkIOMINC-HeaderTest
  vtkIOMPIImage-HeaderTest
  vtkIOMPIParallel-HeaderTest
  vtkIOMotionFX-HeaderTest
  vtkIOMovie-HeaderTest
  vtkIOMySQL-HeaderTest
  vtkIONetCDF-HeaderTest
  vtkIOODBC-HeaderTest
  vtkIOPDAL-HeaderTest
  vtkIOPLY-HeaderTest
  vtkIOParallel-HeaderTest
  vtkIOParallelExodus-HeaderTest
  vtkIOParallelLSDyna-HeaderTest
  vtkIOParallelNetCDF-HeaderTest
  vtkIOParallelXML-HeaderTest
  vtkIOParallelXdmf3-HeaderTest
  vtkIOPostgreSQL-HeaderTest
  vtkIOSQL-HeaderTest
  vtkIOSegY-HeaderTest
  vtkIOTRUCHAS-HeaderTest
  vtkIOTecplotTable-HeaderTest
  vtkIOVPIC-HeaderTest
  vtkIOVeraOut-HeaderTest
  vtkIOVideo-HeaderTest
  vtkIOXML-HeaderTest
  vtkIOXMLParser-HeaderTest
  vtkIOXdmf2-HeaderTest
  vtkIOXdmf3-HeaderTest
  vtkImagingColor-HeaderTest
  vtkImagingCore-HeaderTest
  vtkImagingFourier-HeaderTest
  vtkImagingGeneral-HeaderTest
  vtkImagingHybrid-HeaderTest
  vtkImagingMath-HeaderTest
  vtkImagingMorphological-HeaderTest
  vtkImagingOpenGL2-HeaderTest
  vtkImagingSources-HeaderTest
  vtkImagingStatistics-HeaderTest
  vtkImagingStencil-HeaderTest
  vtkInfovisBoost-HeaderTest
  vtkInfovisBoostGraphAlgorithms-HeaderTest
  vtkInfovisCore-HeaderTest
  vtkInfovisLayout-HeaderTest
  vtkInteractionImage-HeaderTest
  vtkInteractionStyle-HeaderTest
  vtkInteractionWidgets-HeaderTest
  vtkParallelCore-HeaderTest
  vtkParallelMPI-HeaderTest
  vtkParallelMPI4Py-HeaderTest
  vtkRenderingAnnotation-HeaderTest
  vtkRenderingContext2D-HeaderTest
  vtkRenderingContextOpenGL2-HeaderTest
  vtkRenderingCore-HeaderTest
  vtkRenderingExternal-HeaderTest
  vtkRenderingFreeType-HeaderTest
  vtkRenderingFreeTypeFontConfig-HeaderTest
  vtkRenderingGL2PSOpenGL2-HeaderTest
  vtkRenderingImage-HeaderTest
  vtkRenderingLICOpenGL2-HeaderTest
  vtkRenderingLOD-HeaderTest
  vtkRenderingLabel-HeaderTest
  vtkRenderingMatplotlib-HeaderTest
  vtkRenderingOSPRay-HeaderTest
  vtkRenderingOpenGL2-HeaderTest
  vtkRenderingOpenVR-HeaderTest
  vtkRenderingOptiX-HeaderTest
  vtkRenderingParallel-HeaderTest
  vtkRenderingParallelLIC-HeaderTest
  vtkRenderingQt-HeaderTest
  vtkRenderingSceneGraph-HeaderTest
  vtkRenderingTk-HeaderTest
  vtkRenderingVolume-HeaderTest
  vtkRenderingVolumeAMR-HeaderTest
  vtkRenderingVolumeOpenGL2-HeaderTest
  vtkTestingCore-HeaderTest
  vtkTestingGenericBridge-HeaderTest
  vtkTestingIOSQL-HeaderTest
  vtkTestingRendering-HeaderTest
  vtkTclTk-HeaderTest
  vtkVPIC-HeaderTest
  vtkdiy2-HeaderTest
  vtkdoubleconversion-HeaderTest
  vtkeigen-HeaderTest
  vtkexodusII-HeaderTest
  vtkexpat-HeaderTest
  vtkfreetype-HeaderTest
  vtkgl2ps-HeaderTest
  vtkglew-HeaderTest
  vtkhdf5-HeaderTest
  vtkjpeg-HeaderTest
  vtkjsoncpp-HeaderTest
  vtkkissfft-HeaderTest
  vtklibharu-HeaderTest
  vtklibproj-HeaderTest
  vtklibxml2-HeaderTest
  vtklz4-HeaderTest
  vtklzma-HeaderTest
  vtkmpi4py-HeaderTest
  vtknetcdf-HeaderTest
  vtknetcdfcpp-HeaderTest
  vtkogg-HeaderTest
  vtkpegtl-HeaderTest
  vtkpng-HeaderTest
  vtksqlite-HeaderTest
  vtktheora-HeaderTest
  vtktiff-HeaderTest
  vtkutf8-HeaderTest
  vtkverdict-HeaderTest
  vtkVTKm-HeaderTest
  vtkxdmf2-HeaderTest
  vtkxdmf3-HeaderTest
  vtkzfp-HeaderTest
  vtkzlib-HeaderTest
  vtkUtilitiesBenchmarks-HeaderTest
  vtkDICOMParser-HeaderTest
  vtkUtilitiesEncodeString-HeaderTest
  vtkkwiml-HeaderTest
  vtksys-HeaderTest
  vtkMetaIO-HeaderTest
  vtkPython-HeaderTest
  vtkPythonInterpreter-HeaderTest
  vtkViewsContext2D-HeaderTest
  vtkViewsCore-HeaderTest
  vtkViewsGeovis-HeaderTest
  vtkViewsInfovis-HeaderTest
  vtkViewsQt-HeaderTest
  vtkWebCore-HeaderTest
  vtkWebPython-HeaderTest
  vtkWebGLExporter-HeaderTest
  vtkWrappingJava-HeaderTest
  vtkWrappingPythonCore-HeaderTest
  vtkWrappingTools-HeaderTest
  vtkCosmoHaloFinder-HeaderTest
  vtkicet-HeaderTest
  vtknvpipe-HeaderTest
  vtkqttesting-HeaderTest
  vtkcgns-HeaderTest
  CinemaPython-HeaderTest
  vtkprotobuf-HeaderTest
  vtkpugixml-HeaderTest
  Pygments-HeaderTest
  vtkUtilitiesColorSeriesToXML-HeaderTest
  vtkUtilitiesLegacyColorMapXMLToJSON-HeaderTest
  vtkUtilitiesProcessXML-HeaderTest
  smTestDriver-HeaderTest
  VisItLib-HeaderTest
  vtkIOVisItBridge-HeaderTest
  vtkUtilitiesWrapClientServer-HeaderTest
  vtkPVAnimation-HeaderTest
  vtkPVCinemaReader-HeaderTest
  vtkPVClientServerCoreCore-HeaderTest
  vtkPVClientServerCoreDefault-HeaderTest
  vtkPVClientServerCoreRendering-HeaderTest
  vtkClientServer-HeaderTest
  vtkPVCommon-HeaderTest
  vtkPVPythonAlgorithm-HeaderTest
  vtkPVServerImplementationCore-HeaderTest
  vtkPVServerImplementationRendering-HeaderTest
  vtkPVServerManagerCore-HeaderTest
  vtkPVServerManagerDefault-HeaderTest
  vtkPVServerManagerRendering-HeaderTest
  vtkPVServerManagerApplication-HeaderTest
  vtkPVVTKExtensionsCGNSReader-HeaderTest
  vtkPVVTKExtensionsCGNSWriter-HeaderTest
  vtkPVVTKExtensionsCore-HeaderTest
  vtkPVVTKExtensionsCosmoTools-HeaderTest
  vtkPVVTKExtensionsDefault-HeaderTest
  vtkPVVTKExtensionsH5PartReader-HeaderTest
  vtkPVVTKExtensionsPoints-HeaderTest
  vtkPVVTKExtensionsRendering-HeaderTest
  vtkPVVTKExtensionsSIL-HeaderTest
  pqApplicationComponents-HeaderTest
  pqComponents-HeaderTest
  pqCore-HeaderTest
  pqDeprecated-HeaderTest
  pqPython-HeaderTest
  pqWidgets-HeaderTest
  vtkPVCatalyst-HeaderTest
  vtkPVCatalystTestDriver-HeaderTest
  vtkParaViewWebCore-HeaderTest
  vtkParaViewWebPython-HeaderTest
  vtkParaViewWebPython2-HeaderTest
  vtkParaViewWeb-HeaderTest


  PrintSelf-Charts
  PrintSelf-Common
  PrintSelf-Filtering
  PrintSelf-GenericFiltering
  PrintSelf-Geovis
  PrintSelf-Graphics
  PrintSelf-Hybrid
  PrintSelf-Imaging
  PrintSelf-Infovis
  PrintSelf-IO
  PrintSelf-Parallel
  PrintSelf-Rendering
  PrintSelf-Views
  PrintSelf-VolumeRendering
  PrintSelf-Widgets

  TestSetObjectMacro-Charts
  TestSetObjectMacro-Common
  TestSetObjectMacro-Filtering
  TestSetObjectMacro-GenericFiltering
  TestSetObjectMacro-Geovis
  TestSetObjectMacro-Graphics
  TestSetObjectMacro-Hybrid
  TestSetObjectMacro-Imaging
  TestSetObjectMacro-Infovis
  TestSetObjectMacro-IO
  TestSetObjectMacro-Parallel
  TestSetObjectMacro-Rendering
  TestSetObjectMacro-Views
  TestSetObjectMacro-VolumeRendering
  TestSetObjectMacro-Widgets

  # this one runs python which then runs two program so no memory checking there
  Sockets-image
  )


#####################################################
# Be aware CMake currently warns on all the following
#
# "([^ :]+):([0-9]+): warning:",
#  "([^ :]+):([0-9]+): note:",
#  "^cc[^C]*CC: WARNING File = ([^,]+), Line = ([0-9]+)",
#  "^ld([^:])*:([ \\t])*WARNING([^:])*:",
#  "([^:]+): warning ([0-9]+):",
#  "^\"[^\"]+\", line [0-9]+: [Ww](arning|arnung)",
#  "([^:]+): warning[ \\t]*[0-9]+[ \\t]*:",
#  "^(Warning|Warnung) ([0-9]+):",
#  "^(Warning|Warnung)[ :]",
#  "WARNING: ",
#  "([^ :]+) : warning",
#  "([^:]+): warning",
#  "\", line [0-9]+\\.[0-9]+: [0-9]+-[0-9]+ \\([WI]\\)",
#  "^cxx: Warning:",
#  ".*file: .* has no symbols",
#  "([^ :]+):([0-9]+): (Warning|Warnung)",
#  "\\([0-9]*\\): remark #[0-9]*",
#  "\".*\", line [0-9]+: remark\\([0-9]*\\):",
#  "cc-[0-9]* CC: REMARK File = .*, Line = [0-9]*",
#  "^CMake Warning.*:",
#  "^\\[WARNING\\]",

SET(CTEST_CUSTOM_WARNING_MATCH
  ${CTEST_CUSTOM_WARNING_MATCH}
  "{standard input}:[0-9][0-9]*: Warning: "
  )

# Removing this because it somehow matches normal build output lines
# on several platforms.  Perhaps there is a bug in the custom match
# support.
#
#  SET(CTEST_CUSTOM_ERROR_MATCH
#    ${CTEST_CUSTOM_ERROR_MATCH}
#    "\\", line [0-9]+, in "
#    )

IF(CMAKE_SYSTEM MATCHES "OSF")
  SET(CTEST_CUSTOM_WARNING_EXCEPTION
    ${CTEST_CUSTOM_WARNING_EXCEPTION}
    "vtkKWApplication"
    "vtkKWObject"
    )
ENDIF()

SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  "vcruntime_exception.h\\(43\\): note: see declaration"
  "json/json"
  "shadows a member of 'OGRRawPoint'"
  "list.[0-9]+. : warning C4702: unreachable code"
  "xtree.[0-9]+. : warning C4702: unreachable code"
  "vector.[0-9]+. : warning C4702: unreachable code"
  "warning LNK4221"
  "variable .var_args[2]*. is used before its value is set"
  "jobserver unavailable"
  "warning: \\(Long double usage is reported only once for each file"
  "warning: To disable this warning use"
  "warning: .+ might be clobbered by .longjmp. or .vfork."
  "(ranlib|libtool):.*file: .+ has no symbols"
  "could not be inlined"
  "ld: warning prebinding disabled because \\((__TEXT|__DATA|__LINKEDIT) segment \\(address = 0x[a-f0-9]+ size = 0x[a-f0-9]+\\) of (.*) overlaps with (__LINKEDIT|__TEXT|__DATA) segment \\(address = 0x[a-f0-9]+ size = 0x[a-f0-9]+\\) of (.*)"
  "ld: warning prebinding disabled because dependent library: (.*).dylib is not prebound"
  "warning: duplicate dylib"

  # MPI uses c++ but may have been built with a different c++ compiler.
  # It seems to work anyway so let's ignore it to make it easier to
  # test more compilers.
  "ld: warning: libstdc.*, needed by .*, may conflict with libstdc.*"

  # Does *anyone* have an STL implementation that compiles without warnings...?
  "cc-1116 CC: WARNING File = /usr/include/CC/stl_alloc.h, Line = 175"

  # vtkfreetype needs to be updated to get rid of warnings that occur during
  # 64-bit compiles... for now, mask them out of dashboard results:
  "vtkfreetype.*warning C4"
  "vtkfreetype.*warning: dereferencing type-punned pointer"
  "vtkfreetype.*warning: conversion to .* from .* may change the sign of the result"
  "vtkfreetype.*warning: passing argument .* of .* as .*signed due to prototype"
  "vtkfreetype.*warning: passing argument .* of .* with different width due to prototype"
  "vtkfreetype.*warning: conversion to .* from .* may alter its value"
  "vtkfreetype.*warning: conversion of unsigned constant value to negative integer"
  "vtkfreetype.*warning: suggest braces around empty body in 'do' statement"
  "vtkfreetype.*warning: negative integer implicitly converted to unsigned type"
  "vtkfreetype.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "vtkfreetype.*note: initialized from here"
  "vtkfreetype.*warning: .* may be used uninitialized in this function"
  "vtkfreetype.*note: .* was declared here"
  "vtkfreetype/.*warning: .* set but not used"
  "vtkfreetype/.*warning: .* defined but not used"
  "WARNING: While resolving call to function .*FTC_GNode_Compare.* arguments were dropped!"
  # vtknetcdf occasionally has warnings for things that are not a problem.
  "vtknetcdf.*warning: dereferencing type-punned pointer"
  "vtknetcdf.*warning: passing argument .* of .* as .*signed due to prototype"
  "vtknetcdf.*warning: conversion to .* from .* may change the sign of the result"
  "vtknetcdf.*warning: conversion to .* from .* may alter its value"
  "vtknetcdf.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "vtknetcdf.*note: initialized from here"
  # Some VTK dashboards include building bits of Qt which produce lots of
  # the following warnings when built with the MS compilers. Qt guys should
  # fix their code. Until they do, keep the Qt chatter off the VTK dashboard
  # results:
  "[Qq]t([Cc]ore|[Gg]ui).*(warning|note)"
  "[Qq]t.*h.*warning.*declaration of .* shadows a member of .this"
  "[Qq]t.*h.*warning.*(copy constructor|assignment operator) could not be generated"
  "warning C4244: 'initializing' : conversion from 'qint64' to 'int', possible loss of data"
  # gcc -Wstric-aliasing
  "[Qq]t.*q.*h.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "[Qq]t.*q.*h.*note: initialized from here"
  "[Qq]t.*q.*h.*note: while compiling"
  "[Qq]t.*q.*h.*note: see reference"
  "[Qq]t.*ui_"
  "[Qq]t.*note: see reference"
  "[Qq]t.*warning C4714"

  # Specifically for HP compiler, mask out
  "Filtering.vtkImageMultiple(Input|InputOutput)Filter.cxx.*warning.*more strictly aligned type"
  "IO.vtkJPEG(Reader|Writer).cxx.*warning.*more strictly aligned type"
  ".*warning.*relational operator.*always evaluates to.*"
  ".*warning.*controlling expression is constant"
  "[Qq]t.*h.*warning.*types cannot be declared in anonymous unions"

  # QT on HP-UX uses -ldl while VTK uses -dldl.
  "aCC: warning 983: The -ldl library specified on the command line is also added automatically by the compiler driver."

  # This test is made to discover compiler warnings, therefore the emitted
  # warnings are irrelevant in a dashboard submission
  "TestCxxFeatures.cxx.*warning.*type qualifiers ignored on function return type"

  # File generated by lex/yacc flex/bison, cannot fix the warnings.
  "vtkParse.y.*passing argument 1 of 'preSig' discards qualifiers from pointer target type"
  "vtkParse.y.*passing argument 1 of 'postSig' discards qualifiers from pointer target type"
  "vtkParse.l.*warning: ignoring return value of 'fwrite', declared with attribute warn_unused_result"
  "vtkParse.l.*warning: passing argument .* of .* as .* due to prototype"
  "lex.yy.c.*warning: passing argument .* of .* as .* due to prototype"

  # Java lint warnings
  "Note: .* uses? or overrides a deprecated API"
  "Note: .* uses? unchecked or unsafe operations"
  "Note: Recompile with -Xlint:.* for details"

  # warnings from some Open MPI headers/libs, cannot fix:
  "/openmpi/.*request_inln.h.*warning: declaration .struct MPI::Grequest_intercept_t. does not declare anything"
  "openmpi.*comm_inln.h.*warning: unused parameter"
  "openmpi.*/cxx/op_inln.h.*warning: cast between incompatible function types from"

  # remove the next line once this class is removed probably VTK 9.1
  "vtkExtractArraysOverTime"

  # warnings from some Eigen headers:
  #
  # Eigin has so many warnings using individual suppressions
  # does not work. So many will be suppressed that it exceeds
  # the limit ctest will show making it difficult to see
  # the specifics of an unsuppressed warning unless you have
  # access to the raw build logs. So we suppress everything
  # that has eigin in the path. The old suppressions are left
  # commented below should they be needed.
  "[Ee]igen/src/.* note:"
  "[Ee]igen/src/.* warning:"
  "vtkeigen::"

  # "[Ee]igen/src/.* note: \\(skipping"
  # "[Ee]igen/src/.* note: expanded from macro"
  # "[Ee]igen/src/.* note: implicit copy constructor for"
  # "[Ee]igen/src/.* note: in expansion of macro"
  # "[Ee]igen/src/.* note: in implicit copy constructor for"
  # "[Ee]igen/src/.* note: in implicit move constructor for"
  # "[Ee]igen/src/.* note: in instantiation of member function"
  # "[Ee]igen/src/.* note: previous declaration is here"
  # "[Ee]igen/src/.* note: shadowed declaration is here"
  # "[Ee]igen/src/.* warning: cast from"
  # "[Ee]igen/src/.* warning: 'm_maxThreads' was marked unused but was used"
  # "[Ee]igen/src/.* warning: declaration of '.*' shadows"
  # "[Ee]igen/src/.* warning: declaration shadows a typedef in"
  # "[Ee]igen/src/.* warning: definition of implicit copy constructor for"
  # "[Ee]igen/src/.* warning: enum constant in boolean context"
  # "note: in instantiation of member function 'vtkeigen::"
  # "note: in instantiation of function template specialization 'vtkeigen::"

  # nested from an eigen macro
  "include/assert.h.* note: expanded from macro 'assert'"

  # warnings from some python headers/libs, cannot fix:
  "warning: the use of .tmpnam_r. is dangerous, better use .mkstemp."
  "warning: the use of .tempnam. is dangerous, better use .mkstemp."
  "pyconfig.h.*warning: ._XOPEN_SOURCE. redefined"
  "features.h.*warning: this is the location of the previous definition"

  #boost
  "boost.*warning.*assignment operator could not be generated"
  "boost.*warning.*type name first seen using .* now seen using .*"
  "boost.*warning.*default constructor could not be generated"
  "boost.*warning.*can never be instantiated - user defined constructor required"
  "boost.*warning.*unreferenced formal parameter"
  "boost.*warning.*signed/unsigned mismatch"
  "boost.*warning.*conversion from .* to .*, possible loss of data"
  "boost.*warning.*declaration of .* shadows a member of"
  "boost.*warning.*unused parameter"
  "boost.*warning.*comparison between signed and unsigned integer expressions"
  "TestBoostAdapter.*warning.*edge_property.*may be used uninitialized"

  # bogus unreachable code warning in hashtable in kwsys
  "hashtable.hxx.*warning C4702: unreachable code"

  # Qt Designer related warning
  "QtDesigner/extension.*warning: unused parameter"

  # Strange Arch warning
  "cc1plus: warning: assuming signed overflow does not occur when assuming that .* is always true"

  # Unused dll when building Examples/AMR/Cxx with VS 7.1, Release configuration
  "warning LNK4089: all references to .vtkIOXML-.*dll. discarded by /OPT:REF"

  # Ignore clang's summary warning, assuming prior text has matched some
  # other warning expression:
  "[0-9,]+ warnings? generated."

  #ignore clangs documentation warnings from libxml, which uses gtk-doc natively, not doxygen
  "vtklibxml2.*warning: unknown command tag name"

  # Ignore warnings about inheriting std::exception when the dll-interface
  # doesn't match. There's no other way to really do exceptions properly.
  "warning C4275: non dll-interface class 'std::exception' used as base"

  # This warning occurs when building Java with -source x.y with compiler a.b's
  # runtime library (rt.jar). It also emits a line with "1 warning"
  # which matches ctests regex as well
  "bootstrap class path not set in conjunction with -source"
  "1 warning"

  # diy warnings
  "vtkmdiy/io/utils.hpp\\(84\\): warning: result of call is not used"

  # stephen and matt should be working on these. Suppress until they fix
  # upstream and we update. Todo: check after Sept 1 2018 with Stephen and
  # Matt if these are fixed.
  #
  "vtkmetaio/metaImage.cxx"
  "vtkmetaio/metaArray.cxx"

  # 3-rd party warnings from double-conversion
  "vtkdoubleconversion.*unused function"

  # warnings from ospray include.
  "ospray/ospcommon"

  # warnings as part of the doxygen documentation build
  "no documentation block in"
  "Utilities/Doxygen"
  "Consider increasing DOT_GRAPH_MAX_NODES"
  "based on cache misses the ideal setting for LOOKUP_CACHE_SIZE"

  )

IF(APPLE)
SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  "warning -.: directory name .* does not exist"
  )
ENDIF()

SET(CTEST_CUSTOM_COVERAGE_EXCLUDE
  ${CTEST_CUSTOM_COVERAGE_EXCLUDE}
  "vtk[^\\.]+(Java|Python).cxx"
  ".*vtkOpenGLState.*" # debugging class
  ".*Testing.Cxx.*cxx"
  ".*Testing.Cxx.*h"
  ".*moc_.*cxx"
  # Generated files
  ".*/Rendering/OpenGL/vtkgl.*"

  # Exclude files from the Utilities directories
  ".*/Utilities/.*"
  ".*/ThirdParty/.*"

  # Exclude vtkOpenGLPolyDataMapper since the class is deprecated since VTK 6.2.
  ".*vtkOpenGLPolyDataMapper.*"
  )

IF(CMAKE_COMPILER_IS_GNUCXX)
SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  # GCC 4.2 has a bug where it has Unnecessary anonymous namespace warnings
  # you can find the full bug on GNU Bugzilla with bug number 29365
  "warning: .* has a field .* whose type uses the anonymous namespace"
  )
ENDIF()

# If VTK_LEGACY_REMOVE is not set, then we're expecting code to use deprecated
# API. Hence ignore all deprecation warnings.
IF(NOT VTK_LEGACY_REMOVE AND NOT VTK_LEGACY_SILENT)
SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  ".*[W|w]arning:.* deprecated"
  "[N|n]ote: expanded from macro"
  "[N|n]ote:.* deprecated"
  )
ENDIF()
# Temporarily: to show us *all* the remaining warnings on the
# 64-bit Windows builds on one result page...
#
SET(CTEST_CUSTOM_MAXIMUM_NUMBER_OF_WARNINGS 222)
