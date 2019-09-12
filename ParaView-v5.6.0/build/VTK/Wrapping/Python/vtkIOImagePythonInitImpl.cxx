// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBMPReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkBMPWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDEMReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDICOMImageReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGESignaReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageExport(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageImport(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageImportExecutive(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageReader2(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageReader2Collection(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageReader2Factory(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkImageWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkJPEGReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkJPEGWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkJSONImageWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMedicalImageProperties(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMedicalImageReader2(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMetaImageReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMetaImageWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkMRCReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkNIFTIImageHeader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkNIFTIImageReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkNIFTIImageWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkNrrdReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPNGReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPNGWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPNMReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPNMWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPostScriptWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSLCReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTIFFReader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTIFFWriter(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVolume16Reader(PyObject *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkVolumeReader(PyObject *); }

static PyMethodDef PyvtkIOImagePython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

#ifdef VTK_PY3K
static PyModuleDef PyvtkIOImagePython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOImagePython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOImagePython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
#endif

extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOImagePython(const char *); }

PyObject *real_initvtkIOImagePython(const char *)
{
#ifdef VTK_PY3K
  PyObject *m = PyModule_Create(&PyvtkIOImagePython_Module);
#else

  PyObject *m = Py_InitModule("vtkIOImagePython",
                              PyvtkIOImagePython_Methods);
#endif

  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOImagePython");
  }
  PyVTKAddFile_vtkBMPReader(d);
  PyVTKAddFile_vtkBMPWriter(d);
  PyVTKAddFile_vtkDEMReader(d);
  PyVTKAddFile_vtkDICOMImageReader(d);
  PyVTKAddFile_vtkGESignaReader(d);
  PyVTKAddFile_vtkImageExport(d);
  PyVTKAddFile_vtkImageImport(d);
  PyVTKAddFile_vtkImageImportExecutive(d);
  PyVTKAddFile_vtkImageReader(d);
  PyVTKAddFile_vtkImageReader2(d);
  PyVTKAddFile_vtkImageReader2Collection(d);
  PyVTKAddFile_vtkImageReader2Factory(d);
  PyVTKAddFile_vtkImageWriter(d);
  PyVTKAddFile_vtkJPEGReader(d);
  PyVTKAddFile_vtkJPEGWriter(d);
  PyVTKAddFile_vtkJSONImageWriter(d);
  PyVTKAddFile_vtkMedicalImageProperties(d);
  PyVTKAddFile_vtkMedicalImageReader2(d);
  PyVTKAddFile_vtkMetaImageReader(d);
  PyVTKAddFile_vtkMetaImageWriter(d);
  PyVTKAddFile_vtkMRCReader(d);
  PyVTKAddFile_vtkNIFTIImageHeader(d);
  PyVTKAddFile_vtkNIFTIImageReader(d);
  PyVTKAddFile_vtkNIFTIImageWriter(d);
  PyVTKAddFile_vtkNrrdReader(d);
  PyVTKAddFile_vtkPNGReader(d);
  PyVTKAddFile_vtkPNGWriter(d);
  PyVTKAddFile_vtkPNMReader(d);
  PyVTKAddFile_vtkPNMWriter(d);
  PyVTKAddFile_vtkPostScriptWriter(d);
  PyVTKAddFile_vtkSLCReader(d);
  PyVTKAddFile_vtkTIFFReader(d);
  PyVTKAddFile_vtkTIFFWriter(d);
  PyVTKAddFile_vtkVolume16Reader(d);
  PyVTKAddFile_vtkVolumeReader(d);

  return m;
}
