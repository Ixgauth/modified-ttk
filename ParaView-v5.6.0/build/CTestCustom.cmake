#------------------------------------------------------------------------------
# Inherit VTK's exclusions. We don't have to redefine them in this file anymore.
include("/home/ian/ttk/ParaView-v5.6.0/build/VTK/CTestCustom.cmake")

#------------------------------------------------------------------------------
# Regular expression for warning exception during build process
set (CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}

  # FIXME ignore VTK-m related warnings: remove when these are fixed in VTK-m or VTK
  "ThirdParty/vtkm"
  "Accelerators/Vtkm"

  #ignore protobuf related warnings.
  "ThirdParty.protobuf/"
  "protobuf"
  "vtkPVMessage"
  "vtkSMMessage"
  "google::protobuf::Message"

  #ignore warnings coming from QT headers.
  "[Qq][Tt][Cc][Oo][Rr][Ee]"
  "[Qq][Tt][Gg][Uu][Ii]"
  "[Qq][Tt][Hh][Ee][Ll][Pp]"
  "[Qq][Tt][Tt][Ee][Ss][Tt]"

  # Qt header warnings on Windows with MSVC 2013 (12.0) and newer
  "qmutex"
  "qrefcount"
  "qarraydata"
  "qbytearray"
  "qstring"
  "qmetatype"
  "qsize"
  "qsharedpointer_impl"
  "qvector"
  "qpolygon"
  "qvariant"
  "ParaViewDocumentationInitializer"
  "[Qq]t.*warning C4127"

  #ignore warnings generated by Qt plugin infrastructure
  "qt_plugin_instance_"

  "vtk[^\\.]+ClientServer.cxx"

  # ignore VRPN warnings
  ".*vrpn.*"

  # ignore warnings from openmpi.
  ".*openmpi.*"

  # ignore warnings about unsafe str* functions.
  "_CRT_SECURE_NO_WARNINGS"

  # ignore std::copy() warnings.
  "vtkPVChangeOfBasisHelper.*_SCL_SECURE_NO_WARNINGS"

  # ignore external code issue
  ".*FreeType.*CxxTests.*"

  # Ignore invalid warning
  ".*vtksmrenderviewproxy.cxx.*unreachable code"
  ".*pqComponentsInit.cxx.*conditional expression is constant"
  ".*pqCoreInit.cxx.*conditional expression is constant"
  ".*pqApplicationComponentsInit.cxx.*conditional expression is constant"
  ".*ParaViewDocumentationInitializer.cxx.*conditional expression is constant"

  # ignore warnings from old plugins
  ".*H5Part.*"
  ".*AnalyzeNIfTIReaderWriter.*"

  # ignore method call with return value unused
  "declared with attribute warn_unused_result"
  "warning: ignoring return value"

  # ignore qt library warnings
  ".*qttest.*testlib.*"

  # MPI 2 deprecation warning
  ".*MPI_Errhandler_create.*MPI_Comm_create_errhandler.*"
  ".*MPI_Errhandler_set.*MPI_Comm_set_errhandler.*"

  # Ignore warning on Windows for static builds complaining that the archive has
  # no public symbols and hence will be inaccessible.
  "warning LNK4221"

  # Ignore clang warning when taking c++ file in c mode has they have .c extension
  "clang.*warning.*treating.*input as.*when in.*mode, this behavior is deprecated"
  "clang: warning: argument unused during compilation: '-std=c99'"
  # ignore all unused-.* warnings coming from support tools headers (e.g. Qt).
  "Dashboards/Support.*Wunused"

  # Ignore empty link error
  "/usr/bin/ld.*warning.*init_array section has zero size"

  # Ignore Mac link error about read_only_relocs
  "ld.*warning.*read_only_relocs cannot be used with x86_64"

  # exclude warning from MantaView  plugin
  "MantaView.VTK"
  "manta"

  # exclude warning from GeodesicMeasurement plugin
  "GeodesicMeasurementPlugin"
  "FmmMesh"

  # exclude warnings from mpi4py
  ".*mpi4py.*"

  # exclude warnings from external genericio library.
  "genericio"

  # optimization warnings.
  "vtkStringList.cxx.*X is always false"
  "QvisSpectrumBar.cpp.*X is always false"

  # qmetatype.h uses a local variable destructor that shadows a typedef in Python.h
  "qmetatype.h:892:59: warning: declaration of 'destructor' shadows a global declaration"

  # ignore incorrect inline warnings from ICC for Eigen.
  "Eigen.*warning #2196"

  # ignore warnings from cdilib.c
  "CDIReader.cdilib.c"
  "netcdf.h.* warning: shadowed declaration is here"

  # VS2015 puts out bunch of warnings from xutility/xtree. exclude those.
  "xtree.*warning C4800"
  "xutility.*warning C4702"

  # CTest adds "Note" to default warnings. That makes it very painful
  # to exclude warnings on VS. Skip it.
  "(^|[ :])[Nn][Oo][Tt][Ee]"
)

#------------------------------------------------------------------------------
# Regular expression for excluding files from coverage testing
set (CTEST_CUSTOM_COVERAGE_EXCLUDE
  ${CTEST_CUSTOM_COVERAGE_EXCLUDE}
  ".*/VTK/.*"
  "vtk[^\\.]+ClientServer.cxx"
  "vtk[^\\.]+Python.cxx"
  "ui_[^\\.]+.h"
  "moc_[^\\.]+.h"
  "vtkprotobuf"
)
