#include "vtkLineIntegralConvolution2D_CE.h"

const char *vtkLineIntegralConvolution2D_CE =
"//VTK::System::Dec\n"
"\n"
"//=========================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkLineIntegralConvolution2D_CE.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"//=========================================================================\n"
"\n"
"// gray scale contrast enhance stage implemented via histogram stretching\n"
"// if the min and max are tweaked it can generate out-of-range values\n"
"// these will be clamped in 0 to 1\n"
"\n"
"// the output of this shader\n"
"//VTK::Output::Dec\n"
"\n"
"uniform sampler2D texLIC;  // most recent lic pass\n"
"uniform float uMin;        // min gray scale color value\n"
"uniform float uMaxMinDiff; // max-min\n"
"\n"
"in vec2 tcoordVC;\n"
"\n"
"void main( void )\n"
"{\n"
"  vec4 lic = texture2D(texLIC, tcoordVC.st);\n"
"  if (lic.g!=0.0)\n"
"    {\n"
"    gl_FragData[0] = lic;\n"
"    }\n"
"  else\n"
"    {\n"
"    float CElic = clamp((lic.r - uMin)/uMaxMinDiff, 0.0, 1.0);\n"
"    gl_FragData[0] = vec4(CElic, lic.gb, 1.0);\n"
"    }\n"
"}\n"
"";