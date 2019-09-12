/// \ingroup vtkWrappers
/// \class ttkTopologicalCompressionReader
/// \author Maxime Soler <soler.maxime@total.com>
/// \date 21/04/2017
///
/// \brief VTK-filter that wraps the topologicalCompressionWriter processing package.

#ifndef _VTK_TOPOLOGICALCOMPRESSIONREADER_H
#define _VTK_TOPOLOGICALCOMPRESSIONREADER_H

// TTK
#include                  <TopologicalCompression.h>
#include                  <ttkWrapper.h>

// VTK
#include                  <vtkImageAlgorithm.h>
#include                  <vtkDataObject.h>
#include                  <vtkPolyData.h>
#include                  <vtkPoints.h>
#include                  <vtkStreamingDemandDrivenPipeline.h>
#include                  <vtkDemandDrivenPipeline.h>
#include                  <vtkCharArray.h>
#include                  <vtkDataArray.h>
#include                  <vtkDataSet.h>
#include                  <vtkDataSetAlgorithm.h>
#include                  <vtkDoubleArray.h>
#include                  <vtkFiltersCoreModule.h>
#include                  <vtkFloatArray.h>
#include                  <vtkInformation.h>
#include                  <vtkIntArray.h>
#include                  <vtkObjectFactory.h>
#include                  <vtkPointData.h>
#include                  <vtkSmartPointer.h>
#include                  <vtkImageData.h>
#include                  <vtkCellData.h>
#include                  <vtkAlgorithm.h>

// STD
#include                  <string>
#include                  <iostream>
#include                  <fstream>
#include                  <limits.h>

#ifndef TTK_PLUGIN
class VTKFILTERSCORE_EXPORT ttkTopologicalCompressionReader
#else
class ttkTopologicalCompressionReader
#endif
  : public vtkImageAlgorithm
{

  public:

    static ttkTopologicalCompressionReader *New();

    vtkTypeMacro(ttkTopologicalCompressionReader, vtkAlgorithm);

    vtkSetStringMacro(FileName);
    vtkGetStringMacro(FileName);

    vtkSetMacro(DataScalarType, int);
    vtkGetMacro(DataScalarType, int);

  protected:

    // Regular ImageData reader management.
    ttkTopologicalCompressionReader();
    ~ttkTopologicalCompressionReader() = default;
    int FillOutputPortInformation(int, vtkInformation*) override;
    int RequestData(
      vtkInformation *,
      vtkInformationVector **,
      vtkInformationVector *) override;
    virtual int RequestInformation(
      vtkInformation *request,
      vtkInformationVector **inputVector,
      vtkInformationVector *outputVector);

    // TTK management.
    void BuildMesh();

  private:

    // General properties.
    char                            *FileName;
    FILE                             *fp;

    // Data properties.
    int                              DataScalarType;
    int                              DataExtent[6];
    double                           DataSpacing[3];
    double                           DataOrigin[3];
    double                           Tolerance;
    bool                             ZFPOnly;
    int                              SQMethod;

    // TTK object dependencies.
    ttkTriangulation                 triangulation;
    ttk::TopologicalCompression      topologicalCompression;
    vtkSmartPointer<vtkImageData>    mesh;
    vtkSmartPointer<vtkDoubleArray>  decompressed;
    vtkSmartPointer<vtkIntArray>     vertexOffset;
};

#endif // _VTK_TOPOLOGICALCOMPRESSIONREADER_H
