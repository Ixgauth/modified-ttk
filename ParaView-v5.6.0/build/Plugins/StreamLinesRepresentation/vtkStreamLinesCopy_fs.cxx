#include "vtkStreamLinesCopy_fs.h"

const char *vtkStreamLinesCopy_fs =
"//VTK::System::Dec\n"
"//VTK::Output::Dec\n"
"\n"
"varying vec2 tcoordVC;\n"
"\n"
"uniform sampler2D source;\n"
"\n"
"void main(void)\n"
"{\n"
"  gl_FragData[0] = texture2D(source, tcoordVC);\n"
"}\n"
"";
