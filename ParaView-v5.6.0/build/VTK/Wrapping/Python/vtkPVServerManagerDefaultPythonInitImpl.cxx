// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkLoadStateOptions(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPVGeneralSettings(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPVMultiServerDataSource(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPVX3DExporter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMCameraConfigurationReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMCameraConfigurationWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMCSVExporterProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMCSVProxiesInitializationHelper(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMDirectoryProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMEnsembleDataReaderProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMExporterProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMGL2PSExporterProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMInteractionUndoStackBuilder(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMInteractiveSelectionPipeline(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMLoadStateOptionsProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMMultiServerSourceProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMPLYWriterProxyInitializationHelper(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMPreselectionPipeline(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMPropertyModificationUndoElement(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMProxyClipboard(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMProxyConfigurationReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMProxyConfigurationWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMPSWriterProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMReaderReloadHelper(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMRenderViewExporterProxy(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMSpreadSheetRepresentationInitializationHelper(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMTesting(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMTooltipSelectionPipeline(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMViewExportHelper(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSMXYChartRepresentationInitializationHelper(PyObject *); }

static PyMethodDef PyvtkPVServerManagerDefaultPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkPVServerManagerDefaultPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkPVServerManagerDefaultPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkPVServerManagerDefaultPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkPVServerManagerDefaultPython(const char *); }

PyObject *real_initvtkPVServerManagerDefaultPython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkPVServerManagerDefaultPython_Module);
#else

  PyObject *m = Py_InitModule("vtkPVServerManagerDefaultPython",
                              PyvtkPVServerManagerDefaultPython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkPVServerManagerDefaultPython");
  }
  PyVTKAddFile_vtkLoadStateOptions(d);
  PyVTKAddFile_vtkPVGeneralSettings(d);
  PyVTKAddFile_vtkPVMultiServerDataSource(d);
  PyVTKAddFile_vtkPVX3DExporter(d);
  PyVTKAddFile_vtkSMCameraConfigurationReader(d);
  PyVTKAddFile_vtkSMCameraConfigurationWriter(d);
  PyVTKAddFile_vtkSMCSVExporterProxy(d);
  PyVTKAddFile_vtkSMCSVProxiesInitializationHelper(d);
  PyVTKAddFile_vtkSMDirectoryProxy(d);
  PyVTKAddFile_vtkSMEnsembleDataReaderProxy(d);
  PyVTKAddFile_vtkSMExporterProxy(d);
  PyVTKAddFile_vtkSMGL2PSExporterProxy(d);
  PyVTKAddFile_vtkSMInteractionUndoStackBuilder(d);
  PyVTKAddFile_vtkSMInteractiveSelectionPipeline(d);
  PyVTKAddFile_vtkSMLoadStateOptionsProxy(d);
  PyVTKAddFile_vtkSMMultiServerSourceProxy(d);
  PyVTKAddFile_vtkSMPLYWriterProxyInitializationHelper(d);
  PyVTKAddFile_vtkSMPreselectionPipeline(d);
  PyVTKAddFile_vtkSMPropertyModificationUndoElement(d);
  PyVTKAddFile_vtkSMProxyClipboard(d);
  PyVTKAddFile_vtkSMProxyConfigurationReader(d);
  PyVTKAddFile_vtkSMProxyConfigurationWriter(d);
  PyVTKAddFile_vtkSMPSWriterProxy(d);
  PyVTKAddFile_vtkSMReaderReloadHelper(d);
  PyVTKAddFile_vtkSMRenderViewExporterProxy(d);
  PyVTKAddFile_vtkSMSpreadSheetRepresentationInitializationHelper(d);
  PyVTKAddFile_vtkSMTesting(d);
  PyVTKAddFile_vtkSMTooltipSelectionPipeline(d);
  PyVTKAddFile_vtkSMViewExportHelper(d);
  PyVTKAddFile_vtkSMXYChartRepresentationInitializationHelper(d);

  return m;
}
