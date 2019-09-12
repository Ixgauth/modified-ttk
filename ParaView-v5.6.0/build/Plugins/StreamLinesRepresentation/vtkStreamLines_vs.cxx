#include "vtkStreamLines_vs.h"

const char *vtkStreamLines_vs =
"//VTK::System::Dec\n"
"//VTK::Output::Dec\n"
"\n"
"attribute vec4 vertexMC;\n"
"attribute vec3 scalarColor;\n"
"\n"
"uniform mat4 MCDCMatrix;\n"
"\n"
"varying vec3 vertexColorVSOutput;\n"
"\n"
"void main(void)\n"
"{\n"
"  vertexColorVSOutput = scalarColor.rgb;\n"
"  gl_Position = MCDCMatrix * vertexMC;\n"
"}\n"
"";
