/// \ingroup vtk
/// \class ttkOFFWriter
/// \author Julien Tierny
/// \date December 2017.<julien.tierny@lip6.fr>
/// \brief ttkOFFWriter - Object File Format Writer
///
/// Writes an .off file into VTK format.

#pragma once

#include <vtkPoints.h>
#include <vtkSmartPointer.h>
#include <vtkDataSetWriter.h>

#include <string>
#include <vector>

#ifndef TTK_PLUGIN
class VTKIOLEGACY_EXPORT ttkOFFWriter
#else
class ttkOFFWriter 
#endif
  : public vtkDataSetWriter{
  
  public:
    
    vtkTypeMacro(ttkOFFWriter, vtkDataSetWriter);
    void PrintSelf(ostream &os, vtkIndent indent) override;

    static ttkOFFWriter *New();

    // Description:
    // Specify file name of the .abc file.
    vtkSetStringMacro(FileName);
    vtkGetStringMacro(FileName);

  protected:
    ttkOFFWriter();
    ~ttkOFFWriter();
    
    int OpenFile();
    virtual void WriteData() override;
    
    char *FileName;
    ofstream *Stream;
    
  private:
    ttkOFFWriter(const ttkOFFWriter &) = delete;
    void operator=(const ttkOFFWriter &) = delete;

};
