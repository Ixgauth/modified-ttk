/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingMatplotlibObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkRenderingMatplotlibObjectFactory_h
#define vtkRenderingMatplotlibObjectFactory_h

#include "vtkRenderingMatplotlibModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGMATPLOTLIB_EXPORT vtkRenderingMatplotlibObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingMatplotlibObjectFactory * New();
  vtkTypeMacro(vtkRenderingMatplotlibObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkRenderingMatplotlib factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkRenderingMatplotlibObjectFactory();

private:
  vtkRenderingMatplotlibObjectFactory(const vtkRenderingMatplotlibObjectFactory&) = delete;
  void operator=(const vtkRenderingMatplotlibObjectFactory&) = delete;
};

#endif // vtkRenderingMatplotlibObjectFactory_h
