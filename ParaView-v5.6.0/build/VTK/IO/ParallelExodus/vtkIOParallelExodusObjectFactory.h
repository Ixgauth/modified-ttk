/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkIOParallelExodusObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkIOParallelExodusObjectFactory_h
#define vtkIOParallelExodusObjectFactory_h

#include "vtkIOParallelExodusModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKIOPARALLELEXODUS_EXPORT vtkIOParallelExodusObjectFactory : public vtkObjectFactory
{
public:
  static vtkIOParallelExodusObjectFactory * New();
  vtkTypeMacro(vtkIOParallelExodusObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkIOParallelExodus factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkIOParallelExodusObjectFactory();

private:
  vtkIOParallelExodusObjectFactory(const vtkIOParallelExodusObjectFactory&) = delete;
  void operator=(const vtkIOParallelExodusObjectFactory&) = delete;
};

#endif // vtkIOParallelExodusObjectFactory_h
