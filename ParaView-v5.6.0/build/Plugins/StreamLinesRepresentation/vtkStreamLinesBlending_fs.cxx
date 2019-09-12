#include "vtkStreamLinesBlending_fs.h"

const char *vtkStreamLinesBlending_fs =
"//VTK::System::Dec\n"
"//VTK::Output::Dec\n"
"\n"
"varying vec2 tcoordVC;\n"
"\n"
"uniform sampler2D prev;\n"
"uniform sampler2D current;\n"
"uniform float alpha;\n"
"\n"
"void main(void)\n"
"{\n"
"  vec4 pc = texture2D(prev, tcoordVC);\n"
"  vec4 cc = texture2D(current, tcoordVC);\n"
"  gl_FragData[0] = pc * alpha + cc;\n"
"}\n"
"";
