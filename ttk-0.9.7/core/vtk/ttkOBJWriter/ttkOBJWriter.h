/// \ingroup vtk
/// \class ttkOBJWriter
/// \author Julien Tierny
/// \date February 2018.<julien.tierny@lip6.fr>
/// \brief ttkOBJWriter - Object File Format Writer
///
/// Writes an .off file into VTK format.

#pragma once

#include <vtkPoints.h>
#include <vtkSmartPointer.h>
#include <vtkDataSetWriter.h>

#include <string>
#include <vector>

#ifndef TTK_PLUGIN
class VTKIOLEGACY_EXPORT ttkOBJWriter
#else
class ttkOBJWriter
#endif
  : public vtkDataSetWriter{
  
  public:
    
    vtkTypeMacro(ttkOBJWriter, vtkDataSetWriter);
    void PrintSelf(ostream &os, vtkIndent indent) override;

    static ttkOBJWriter *New();

    // Description:
    // Specify file name of the .abc file.
    vtkSetStringMacro(FileName);
    vtkGetStringMacro(FileName);

  protected:
    ttkOBJWriter();
    ~ttkOBJWriter();
    
    int OpenFile();
    virtual void WriteData() override;
    
    char *FileName;
    ofstream *Stream;
    
  private:
    ttkOBJWriter(const ttkOBJWriter &) = delete;
    void operator=(const ttkOBJWriter &) = delete;

};
