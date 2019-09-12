#include "vtkglProjectedTetrahedraVS.h"

const char *vtkglProjectedTetrahedraVS =
"//VTK::System::Dec\n"
"\n"
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkglProjectedTetrahedra.glsl\n"
"\n"
"  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"  All rights reserved.\n"
"  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"\n"
"     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"     PURPOSE.  See the above copyright notice for more information.\n"
"\n"
"=========================================================================*/\n"
"\n"
"\n"
"// all variables that represent positions or directions have a suffix\n"
"// indicating the coordinate system they are in. The possible values are\n"
"// MC - Model Coordinates\n"
"// WC - WC world coordinates\n"
"// VC - View Coordinates\n"
"// DC - Display Coordinates\n"
"in vec4 vertexDC;\n"
"in vec3 scalarColor;\n"
"in float depthArray;\n"
"in float attenuationArray;\n"
"\n"
"out float fdepth;\n"
"out float fattenuation;\n"
"out vec3 fcolor;\n"
"\n"
"void main()\n"
"{\n"
"  fcolor = scalarColor;\n"
"  fdepth = depthArray;\n"
"  fattenuation = attenuationArray;\n"
"  gl_Position = vertexDC;\n"
"}\n"
"";
