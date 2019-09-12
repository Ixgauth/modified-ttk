/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkPVServerManagerRenderingObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkPVServerManagerRenderingObjectFactory_h
#define vtkPVServerManagerRenderingObjectFactory_h

#include "vtkPVServerManagerRenderingModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKPVSERVERMANAGERRENDERING_EXPORT vtkPVServerManagerRenderingObjectFactory : public vtkObjectFactory
{
public:
  static vtkPVServerManagerRenderingObjectFactory * New();
  vtkTypeMacro(vtkPVServerManagerRenderingObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkPVServerManagerRendering factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkPVServerManagerRenderingObjectFactory();

private:
  vtkPVServerManagerRenderingObjectFactory(const vtkPVServerManagerRenderingObjectFactory&) = delete;
  void operator=(const vtkPVServerManagerRenderingObjectFactory&) = delete;
};

#endif // vtkPVServerManagerRenderingObjectFactory_h
