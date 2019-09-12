// python wrapper for vtkX3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkX3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkX3D(PyObject *); }
static PyTypeObject PyvtkX3D_X3DTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkX3D.X3DTypes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkX3D_X3DTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkX3D_X3DTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkX3D_X3DTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkX3D_X3DElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkX3D.X3DElement", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkX3D_X3DElement_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkX3D_X3DElement_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkX3D_X3DElement_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkX3D_X3DAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkX3D.X3DAttribute", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkX3D_X3DAttribute_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkX3D_X3DAttribute_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkX3D_X3DAttribute_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyObject *PyVTKNamespace_vtkX3D()
{
  PyObject *m = PyVTKNamespace_New("vtkX3D");

  PyObject *d = PyVTKNamespace_GetDict(m);
  PyObject *o;

  PyType_Ready(&PyvtkX3D_X3DTypes_Type);
  PyvtkX3D_X3DTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkX3D_X3DTypes_Type);

  o = (PyObject *)&PyvtkX3D_X3DTypes_Type;
  if (PyDict_SetItemString(d, "X3DTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkX3D_X3DElement_Type);
  PyvtkX3D_X3DElement_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkX3D_X3DElement_Type);

  o = (PyObject *)&PyvtkX3D_X3DElement_Type;
  if (PyDict_SetItemString(d, "X3DElement", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkX3D_X3DAttribute_Type);
  PyvtkX3D_X3DAttribute_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkX3D_X3DAttribute_Type);

  o = (PyObject *)&PyvtkX3D_X3DAttribute_Type;
  if (PyDict_SetItemString(d, "X3DAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkX3D::X3DTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "SFVEC3F", vtkX3D::SFVEC3F },
        { "SFVEC2F", vtkX3D::SFVEC2F },
        { "MFVEC3F", vtkX3D::MFVEC3F },
        { "MFVEC2F", vtkX3D::MFVEC2F },
        { "SFCOLOR", vtkX3D::SFCOLOR },
        { "MFCOLOR", vtkX3D::MFCOLOR },
        { "SFROTATION", vtkX3D::SFROTATION },
        { "MFROTATION", vtkX3D::MFROTATION },
        { "SFSTRING", vtkX3D::SFSTRING },
        { "MFSTRING", vtkX3D::MFSTRING },
        { "MFINT32", vtkX3D::MFINT32 },
        { "SFIMAGE", vtkX3D::SFIMAGE },
      };

    o = PyvtkX3D_X3DTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 171; c++)
  {
    typedef vtkX3D::X3DElement cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[171] = {
        { "Shape", vtkX3D::Shape },
        { "Appearance", vtkX3D::Appearance },
        { "Material", vtkX3D::Material },
        { "IndexedFaceSet", vtkX3D::IndexedFaceSet },
        { "ProtoInstance", vtkX3D::ProtoInstance },
        { "Transform", vtkX3D::Transform },
        { "ImageTexture", vtkX3D::ImageTexture },
        { "TextureTransform", vtkX3D::TextureTransform },
        { "Coordinate", vtkX3D::Coordinate },
        { "Normal", vtkX3D::Normal },
        { "Color", vtkX3D::Color },
        { "ColorRGBA", vtkX3D::ColorRGBA },
        { "TextureCoordinate", vtkX3D::TextureCoordinate },
        { "ROUTE", vtkX3D::ROUTE },
        { "fieldValue", vtkX3D::fieldValue },
        { "Group", vtkX3D::Group },
        { "LOD", vtkX3D::LOD },
        { "Switch", vtkX3D::Switch },
        { "Script", vtkX3D::Script },
        { "IndexedTriangleFanSet", vtkX3D::IndexedTriangleFanSet },
        { "IndexedTriangleSet", vtkX3D::IndexedTriangleSet },
        { "IndexedTriangleStripSet", vtkX3D::IndexedTriangleStripSet },
        { "MultiTexture", vtkX3D::MultiTexture },
        { "MultiTextureCoordinate", vtkX3D::MultiTextureCoordinate },
        { "MultiTextureTransform", vtkX3D::MultiTextureTransform },
        { "IndexedLineSet", vtkX3D::IndexedLineSet },
        { "PointSet", vtkX3D::PointSet },
        { "StaticGroup", vtkX3D::StaticGroup },
        { "Sphere", vtkX3D::Sphere },
        { "Box", vtkX3D::Box },
        { "Cone", vtkX3D::Cone },
        { "Anchor", vtkX3D::Anchor },
        { "Arc2D", vtkX3D::Arc2D },
        { "ArcClose2D", vtkX3D::ArcClose2D },
        { "AudioClip", vtkX3D::AudioClip },
        { "Background", vtkX3D::Background },
        { "Billboard", vtkX3D::Billboard },
        { "BooleanFilter", vtkX3D::BooleanFilter },
        { "BooleanSequencer", vtkX3D::BooleanSequencer },
        { "BooleanToggle", vtkX3D::BooleanToggle },
        { "BooleanTrigger", vtkX3D::BooleanTrigger },
        { "Circle2D", vtkX3D::Circle2D },
        { "Collision", vtkX3D::Collision },
        { "ColorInterpolator", vtkX3D::ColorInterpolator },
        { "Contour2D", vtkX3D::Contour2D },
        { "ContourPolyline2D", vtkX3D::ContourPolyline2D },
        { "CoordinateDouble", vtkX3D::CoordinateDouble },
        { "CoordinateInterpolator", vtkX3D::CoordinateInterpolator },
        { "CoordinateInterpolator2D", vtkX3D::CoordinateInterpolator2D },
        { "Cylinder", vtkX3D::Cylinder },
        { "CylinderSensor", vtkX3D::CylinderSensor },
        { "DirectionalLight", vtkX3D::DirectionalLight },
        { "Disk2D", vtkX3D::Disk2D },
        { "EXPORT", vtkX3D::EXPORT },
        { "ElevationGrid", vtkX3D::ElevationGrid },
        { "EspduTransform", vtkX3D::EspduTransform },
        { "ExternProtoDeclare", vtkX3D::ExternProtoDeclare },
        { "Extrusion", vtkX3D::Extrusion },
        { "FillProperties", vtkX3D::FillProperties },
        { "Fog", vtkX3D::Fog },
        { "FontStyle", vtkX3D::FontStyle },
        { "GeoCoordinate", vtkX3D::GeoCoordinate },
        { "GeoElevationGrid", vtkX3D::GeoElevationGrid },
        { "GeoLOD", vtkX3D::GeoLOD },
        { "GeoLocation", vtkX3D::GeoLocation },
        { "GeoMetadata", vtkX3D::GeoMetadata },
        { "GeoOrigin", vtkX3D::GeoOrigin },
        { "GeoPositionInterpolator", vtkX3D::GeoPositionInterpolator },
        { "GeoTouchSensor", vtkX3D::GeoTouchSensor },
        { "GeoViewpoint", vtkX3D::GeoViewpoint },
        { "HAnimDisplacer", vtkX3D::HAnimDisplacer },
        { "HAnimHumanoid", vtkX3D::HAnimHumanoid },
        { "HAnimJoint", vtkX3D::HAnimJoint },
        { "HAnimSegment", vtkX3D::HAnimSegment },
        { "HAnimSite", vtkX3D::HAnimSite },
        { "IMPORT", vtkX3D::IMPORT },
        { "IS", vtkX3D::IS },
        { "Inline", vtkX3D::Inline },
        { "IntegerSequencer", vtkX3D::IntegerSequencer },
        { "IntegerTrigger", vtkX3D::IntegerTrigger },
        { "KeySensor", vtkX3D::KeySensor },
        { "LineProperties", vtkX3D::LineProperties },
        { "LineSet", vtkX3D::LineSet },
        { "LoadSensor", vtkX3D::LoadSensor },
        { "MetadataDouble", vtkX3D::MetadataDouble },
        { "MetadataFloat", vtkX3D::MetadataFloat },
        { "MetadataInteger", vtkX3D::MetadataInteger },
        { "MetadataSet", vtkX3D::MetadataSet },
        { "MetadataString", vtkX3D::MetadataString },
        { "MovieTexture", vtkX3D::MovieTexture },
        { "NavigationInfo", vtkX3D::NavigationInfo },
        { "NormalInterpolator", vtkX3D::NormalInterpolator },
        { "NurbsCurve", vtkX3D::NurbsCurve },
        { "NurbsCurve2D", vtkX3D::NurbsCurve2D },
        { "NurbsOrientationInterpolator", vtkX3D::NurbsOrientationInterpolator },
        { "NurbsPatchSurface", vtkX3D::NurbsPatchSurface },
        { "NurbsPositionInterpolator", vtkX3D::NurbsPositionInterpolator },
        { "NurbsSet", vtkX3D::NurbsSet },
        { "NurbsSurfaceInterpolator", vtkX3D::NurbsSurfaceInterpolator },
        { "NurbsSweptSurface", vtkX3D::NurbsSweptSurface },
        { "NurbsSwungSurface", vtkX3D::NurbsSwungSurface },
        { "NurbsTextureCoordinate", vtkX3D::NurbsTextureCoordinate },
        { "NurbsTrimmedSurface", vtkX3D::NurbsTrimmedSurface },
        { "OrientationInterpolator", vtkX3D::OrientationInterpolator },
        { "PixelTexture", vtkX3D::PixelTexture },
        { "PlaneSensor", vtkX3D::PlaneSensor },
        { "PointLight", vtkX3D::PointLight },
        { "Polyline2D", vtkX3D::Polyline2D },
        { "Polypoint2D", vtkX3D::Polypoint2D },
        { "PositionInterpolator", vtkX3D::PositionInterpolator },
        { "PositionInterpolator2D", vtkX3D::PositionInterpolator2D },
        { "ProtoBody", vtkX3D::ProtoBody },
        { "ProtoDeclare", vtkX3D::ProtoDeclare },
        { "ProtoInterface", vtkX3D::ProtoInterface },
        { "ProximitySensor", vtkX3D::ProximitySensor },
        { "ReceiverPdu", vtkX3D::ReceiverPdu },
        { "Rectangle2D", vtkX3D::Rectangle2D },
        { "ScalarInterpolator", vtkX3D::ScalarInterpolator },
        { "Scene", vtkX3D::Scene },
        { "SignalPdu", vtkX3D::SignalPdu },
        { "Sound", vtkX3D::Sound },
        { "SphereSensor", vtkX3D::SphereSensor },
        { "SpotLight", vtkX3D::SpotLight },
        { "StringSensor", vtkX3D::StringSensor },
        { "Text", vtkX3D::Text },
        { "TextureBackground", vtkX3D::TextureBackground },
        { "TextureCoordinateGenerator", vtkX3D::TextureCoordinateGenerator },
        { "TimeSensor", vtkX3D::TimeSensor },
        { "TimeTrigger", vtkX3D::TimeTrigger },
        { "TouchSensor", vtkX3D::TouchSensor },
        { "TransmitterPdu", vtkX3D::TransmitterPdu },
        { "TriangleFanSet", vtkX3D::TriangleFanSet },
        { "TriangleSet", vtkX3D::TriangleSet },
        { "TriangleSet2D", vtkX3D::TriangleSet2D },
        { "TriangleStripSet", vtkX3D::TriangleStripSet },
        { "Viewpoint", vtkX3D::Viewpoint },
        { "VisibilitySensor", vtkX3D::VisibilitySensor },
        { "WorldInfo", vtkX3D::WorldInfo },
        { "X3D", vtkX3D::X3D },
        { "component", vtkX3D::component },
        { "connect", vtkX3D::connect },
        { "field", vtkX3D::field },
        { "head", vtkX3D::head },
        { "humanoidBodyType", vtkX3D::humanoidBodyType },
        { "meta", vtkX3D::meta },
        { "CADAssembly", vtkX3D::CADAssembly },
        { "CADFace", vtkX3D::CADFace },
        { "CADLayer", vtkX3D::CADLayer },
        { "CADPart", vtkX3D::CADPart },
        { "ComposedCubeMapTexture", vtkX3D::ComposedCubeMapTexture },
        { "ComposedShader", vtkX3D::ComposedShader },
        { "ComposedTexture3D", vtkX3D::ComposedTexture3D },
        { "FloatVertexAttribute", vtkX3D::FloatVertexAttribute },
        { "FogCoordinate", vtkX3D::FogCoordinate },
        { "GeneratedCubeMapTexture", vtkX3D::GeneratedCubeMapTexture },
        { "ImageCubeMapTexture", vtkX3D::ImageCubeMapTexture },
        { "ImageTexture3D", vtkX3D::ImageTexture3D },
        { "IndexedQuadSet", vtkX3D::IndexedQuadSet },
        { "LocalFog", vtkX3D::LocalFog },
        { "Matrix3VertexAttribute", vtkX3D::Matrix3VertexAttribute },
        { "Matrix4VertexAttribute", vtkX3D::Matrix4VertexAttribute },
        { "PackagedShader", vtkX3D::PackagedShader },
        { "PixelTexture3D", vtkX3D::PixelTexture3D },
        { "ProgramShader", vtkX3D::ProgramShader },
        { "QuadSet", vtkX3D::QuadSet },
        { "ShaderPart", vtkX3D::ShaderPart },
        { "ShaderProgram", vtkX3D::ShaderProgram },
        { "TextureCoordinate3D", vtkX3D::TextureCoordinate3D },
        { "TextureCoordinate4D", vtkX3D::TextureCoordinate4D },
        { "TextureTransform3D", vtkX3D::TextureTransform3D },
        { "TextureTransformMatrix3D", vtkX3D::TextureTransformMatrix3D },
      };

    o = PyvtkX3D_X3DElement_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 328; c++)
  {
    typedef vtkX3D::X3DAttribute cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[328] = {
        { "DEF", vtkX3D::DEF },
        { "USE", vtkX3D::USE },
        { "containerField", vtkX3D::containerField },
        { "fromNode", vtkX3D::fromNode },
        { "fromField", vtkX3D::fromField },
        { "toNode", vtkX3D::toNode },
        { "toField", vtkX3D::toField },
        { "name", vtkX3D::name },
        { "value", vtkX3D::value },
        { "color", vtkX3D::color },
        { "colorIndex", vtkX3D::colorIndex },
        { "coordIndex", vtkX3D::coordIndex },
        { "texCoordIndex", vtkX3D::texCoordIndex },
        { "normalIndex", vtkX3D::normalIndex },
        { "colorPerVertex", vtkX3D::colorPerVertex },
        { "normalPerVertex", vtkX3D::normalPerVertex },
        { "rotation", vtkX3D::rotation },
        { "scale", vtkX3D::scale },
        { "center", vtkX3D::center },
        { "scaleOrientation", vtkX3D::scaleOrientation },
        { "translation", vtkX3D::translation },
        { "url", vtkX3D::url },
        { "repeatS", vtkX3D::repeatS },
        { "repeatT", vtkX3D::repeatT },
        { "point", vtkX3D::point },
        { "vector", vtkX3D::vector },
        { "range", vtkX3D::range },
        { "ambientIntensity", vtkX3D::ambientIntensity },
        { "diffuseColor", vtkX3D::diffuseColor },
        { "emissiveColor", vtkX3D::emissiveColor },
        { "shininess", vtkX3D::shininess },
        { "specularColor", vtkX3D::specularColor },
        { "transparency", vtkX3D::transparency },
        { "whichChoice", vtkX3D::whichChoice },
        { "index", vtkX3D::index },
        { "mode", vtkX3D::mode },
        { "source", vtkX3D::source },
        { "function", vtkX3D::function },
        { "alpha", vtkX3D::alpha },
        { "vertexCount", vtkX3D::vertexCount },
        { "radius", vtkX3D::radius },
        { "size", vtkX3D::size },
        { "height", vtkX3D::height },
        { "solid", vtkX3D::solid },
        { "ccw", vtkX3D::ccw },
        { "key", vtkX3D::key },
        { "keyValue", vtkX3D::keyValue },
        { "enabled", vtkX3D::enabled },
        { "direction", vtkX3D::direction },
        { "position", vtkX3D::position },
        { "orientation", vtkX3D::orientation },
        { "bboxCenter", vtkX3D::bboxCenter },
        { "bboxSize", vtkX3D::bboxSize },
        { "AS", vtkX3D::AS },
        { "InlineDEF", vtkX3D::InlineDEF },
        { "accessType", vtkX3D::accessType },
        { "actionKeyPress", vtkX3D::actionKeyPress },
        { "actionKeyRelease", vtkX3D::actionKeyRelease },
        { "address", vtkX3D::address },
        { "altKey", vtkX3D::altKey },
        { "antennaLocation", vtkX3D::antennaLocation },
        { "antennaPatternLength", vtkX3D::antennaPatternLength },
        { "antennaPatternType", vtkX3D::antennaPatternType },
        { "applicationID", vtkX3D::applicationID },
        { "articulationParameterArray", vtkX3D::articulationParameterArray },
        { "articulationParameterChangeIndicatorArray", vtkX3D::articulationParameterChangeIndicatorArray },
        { "articulationParameterCount", vtkX3D::articulationParameterCount },
        { "articulationParameterDesignatorArray", vtkX3D::articulationParameterDesignatorArray },
        { "articulationParameterIdPartAttachedArray", vtkX3D::articulationParameterIdPartAttachedArray },
        { "articulationParameterTypeArray", vtkX3D::articulationParameterTypeArray },
        { "attenuation", vtkX3D::attenuation },
        { "autoOffset", vtkX3D::autoOffset },
        { "avatarSize", vtkX3D::avatarSize },
        { "axisOfRotation", vtkX3D::axisOfRotation },
        { "backUrl", vtkX3D::backUrl },
        { "beamWidth", vtkX3D::beamWidth },
        { "beginCap", vtkX3D::beginCap },
        { "bindTime", vtkX3D::bindTime },
        { "bottom", vtkX3D::bottom },
        { "bottomRadius", vtkX3D::bottomRadius },
        { "bottomUrl", vtkX3D::bottomUrl },
        { "centerOfMass", vtkX3D::centerOfMass },
        { "centerOfRotation", vtkX3D::centerOfRotation },
        { "child1Url", vtkX3D::child1Url },
        { "child2Url", vtkX3D::child2Url },
        { "child3Url", vtkX3D::child3Url },
        { "child4Url", vtkX3D::child4Url },
        { "_class", vtkX3D::_class },
        { "closureType", vtkX3D::closureType },
        { "collideTime", vtkX3D::collideTime },
        { "content", vtkX3D::content },
        { "controlKey", vtkX3D::controlKey },
        { "controlPoint", vtkX3D::controlPoint },
        { "convex", vtkX3D::convex },
        { "coordinateSystem", vtkX3D::coordinateSystem },
        { "copyright", vtkX3D::copyright },
        { "creaseAngle", vtkX3D::creaseAngle },
        { "crossSection", vtkX3D::crossSection },
        { "cryptoKeyID", vtkX3D::cryptoKeyID },
        { "cryptoSystem", vtkX3D::cryptoSystem },
        { "cutOffAngle", vtkX3D::cutOffAngle },
        { "cycleInterval", vtkX3D::cycleInterval },
        { "cycleTime", vtkX3D::cycleTime },
        { "data", vtkX3D::data },
        { "dataFormat", vtkX3D::dataFormat },
        { "dataLength", vtkX3D::dataLength },
        { "dataUrl", vtkX3D::dataUrl },
        { "date", vtkX3D::date },
        { "deadReckoning", vtkX3D::deadReckoning },
        { "deletionAllowed", vtkX3D::deletionAllowed },
        { "description", vtkX3D::description },
        { "detonateTime", vtkX3D::detonateTime },
        { "dir", vtkX3D::dir },
        { "directOutput", vtkX3D::directOutput },
        { "diskAngle", vtkX3D::diskAngle },
        { "displacements", vtkX3D::displacements },
        { "documentation", vtkX3D::documentation },
        { "elapsedTime", vtkX3D::elapsedTime },
        { "ellipsoid", vtkX3D::ellipsoid },
        { "encodingScheme", vtkX3D::encodingScheme },
        { "endAngle", vtkX3D::endAngle },
        { "endCap", vtkX3D::endCap },
        { "enterTime", vtkX3D::enterTime },
        { "enteredText", vtkX3D::enteredText },
        { "entityCategory", vtkX3D::entityCategory },
        { "entityCountry", vtkX3D::entityCountry },
        { "entityDomain", vtkX3D::entityDomain },
        { "entityExtra", vtkX3D::entityExtra },
        { "entityID", vtkX3D::entityID },
        { "entityKind", vtkX3D::entityKind },
        { "entitySpecific", vtkX3D::entitySpecific },
        { "entitySubCategory", vtkX3D::entitySubCategory },
        { "exitTime", vtkX3D::exitTime },
        { "extent", vtkX3D::extent },
        { "family", vtkX3D::family },
        { "fanCount", vtkX3D::fanCount },
        { "fieldOfView", vtkX3D::fieldOfView },
        { "filled", vtkX3D::filled },
        { "finalText", vtkX3D::finalText },
        { "fireMissionIndex", vtkX3D::fireMissionIndex },
        { "fired1", vtkX3D::fired1 },
        { "fired2", vtkX3D::fired2 },
        { "firedTime", vtkX3D::firedTime },
        { "firingRange", vtkX3D::firingRange },
        { "firingRate", vtkX3D::firingRate },
        { "fogType", vtkX3D::fogType },
        { "forceID", vtkX3D::forceID },
        { "frequency", vtkX3D::frequency },
        { "frontUrl", vtkX3D::frontUrl },
        { "fuse", vtkX3D::fuse },
        { "geoCoords", vtkX3D::geoCoords },
        { "geoGridOrigin", vtkX3D::geoGridOrigin },
        { "geoSystem", vtkX3D::geoSystem },
        { "groundAngle", vtkX3D::groundAngle },
        { "groundColor", vtkX3D::groundColor },
        { "hatchColor", vtkX3D::hatchColor },
        { "hatchStyle", vtkX3D::hatchStyle },
        { "hatched", vtkX3D::hatched },
        { "headlight", vtkX3D::headlight },
        { "horizontal", vtkX3D::horizontal },
        { "horizontalDatum", vtkX3D::horizontalDatum },
        { "http_equiv", vtkX3D::http_equiv },
        { "image", vtkX3D::image },
        { "importedDEF", vtkX3D::importedDEF },
        { "info", vtkX3D::info },
        { "innerRadius", vtkX3D::innerRadius },
        { "inputFalse", vtkX3D::inputFalse },
        { "inputNegate", vtkX3D::inputNegate },
        { "inputSource", vtkX3D::inputSource },
        { "inputTrue", vtkX3D::inputTrue },
        { "integerKey", vtkX3D::integerKey },
        { "intensity", vtkX3D::intensity },
        { "jump", vtkX3D::jump },
        { "justify", vtkX3D::justify },
        { "keyPress", vtkX3D::keyPress },
        { "keyRelease", vtkX3D::keyRelease },
        { "knot", vtkX3D::knot },
        { "lang", vtkX3D::lang },
        { "language", vtkX3D::language },
        { "leftToRight", vtkX3D::leftToRight },
        { "leftUrl", vtkX3D::leftUrl },
        { "length", vtkX3D::length },
        { "lengthOfModulationParameters", vtkX3D::lengthOfModulationParameters },
        { "level", vtkX3D::level },
        { "limitOrientation", vtkX3D::limitOrientation },
        { "lineSegments", vtkX3D::lineSegments },
        { "linearAcceleration", vtkX3D::linearAcceleration },
        { "linearVelocity", vtkX3D::linearVelocity },
        { "linetype", vtkX3D::linetype },
        { "linewidthScaleFactor", vtkX3D::linewidthScaleFactor },
        { "llimit", vtkX3D::llimit },
        { "load", vtkX3D::load },
        { "loadTime", vtkX3D::loadTime },
        { "localDEF", vtkX3D::localDEF },
        { "location", vtkX3D::location },
        { "loop", vtkX3D::loop },
        { "marking", vtkX3D::marking },
        { "mass", vtkX3D::mass },
        { "maxAngle", vtkX3D::maxAngle },
        { "maxBack", vtkX3D::maxBack },
        { "maxExtent", vtkX3D::maxExtent },
        { "maxFront", vtkX3D::maxFront },
        { "maxPosition", vtkX3D::maxPosition },
        { "metadataFormat", vtkX3D::metadataFormat },
        { "minAngle", vtkX3D::minAngle },
        { "minBack", vtkX3D::minBack },
        { "minFront", vtkX3D::minFront },
        { "minPosition", vtkX3D::minPosition },
        { "modulationTypeDetail", vtkX3D::modulationTypeDetail },
        { "modulationTypeMajor", vtkX3D::modulationTypeMajor },
        { "modulationTypeSpreadSpectrum", vtkX3D::modulationTypeSpreadSpectrum },
        { "modulationTypeSystem", vtkX3D::modulationTypeSystem },
        { "momentsOfInertia", vtkX3D::momentsOfInertia },
        { "multicastRelayHost", vtkX3D::multicastRelayHost },
        { "multicastRelayPort", vtkX3D::multicastRelayPort },
        { "munitionApplicationID", vtkX3D::munitionApplicationID },
        { "munitionEndPoint", vtkX3D::munitionEndPoint },
        { "munitionEntityID", vtkX3D::munitionEntityID },
        { "munitionQuantity", vtkX3D::munitionQuantity },
        { "munitionSiteID", vtkX3D::munitionSiteID },
        { "munitionStartPoint", vtkX3D::munitionStartPoint },
        { "mustEvaluate", vtkX3D::mustEvaluate },
        { "navType", vtkX3D::navType },
        { "networkMode", vtkX3D::networkMode },
        { "next", vtkX3D::next },
        { "nodeField", vtkX3D::nodeField },
        { "offset", vtkX3D::offset },
        { "on", vtkX3D::on },
        { "order", vtkX3D::order },
        { "originator", vtkX3D::originator },
        { "outerRadius", vtkX3D::outerRadius },
        { "parameter", vtkX3D::parameter },
        { "pauseTime", vtkX3D::pauseTime },
        { "pitch", vtkX3D::pitch },
        { "points", vtkX3D::points },
        { "port", vtkX3D::port },
        { "power", vtkX3D::power },
        { "previous", vtkX3D::previous },
        { "priority", vtkX3D::priority },
        { "profile", vtkX3D::profile },
        { "progress", vtkX3D::progress },
        { "protoField", vtkX3D::protoField },
        { "radioEntityTypeCategory", vtkX3D::radioEntityTypeCategory },
        { "radioEntityTypeCountry", vtkX3D::radioEntityTypeCountry },
        { "radioEntityTypeDomain", vtkX3D::radioEntityTypeDomain },
        { "radioEntityTypeKind", vtkX3D::radioEntityTypeKind },
        { "radioEntityTypeNomenclature", vtkX3D::radioEntityTypeNomenclature },
        { "radioEntityTypeNomenclatureVersion", vtkX3D::radioEntityTypeNomenclatureVersion },
        { "radioID", vtkX3D::radioID },
        { "readInterval", vtkX3D::readInterval },
        { "receivedPower", vtkX3D::receivedPower },
        { "receiverState", vtkX3D::receiverState },
        { "reference", vtkX3D::reference },
        { "relativeAntennaLocation", vtkX3D::relativeAntennaLocation },
        { "resolution", vtkX3D::resolution },
        { "resumeTime", vtkX3D::resumeTime },
        { "rightUrl", vtkX3D::rightUrl },
        { "rootUrl", vtkX3D::rootUrl },
        { "rotateYUp", vtkX3D::rotateYUp },
        { "rtpHeaderExpected", vtkX3D::rtpHeaderExpected },
        { "sampleRate", vtkX3D::sampleRate },
        { "samples", vtkX3D::samples },
        { "shiftKey", vtkX3D::shiftKey },
        { "side", vtkX3D::side },
        { "siteID", vtkX3D::siteID },
        { "skinCoordIndex", vtkX3D::skinCoordIndex },
        { "skinCoordWeight", vtkX3D::skinCoordWeight },
        { "skyAngle", vtkX3D::skyAngle },
        { "skyColor", vtkX3D::skyColor },
        { "spacing", vtkX3D::spacing },
        { "spatialize", vtkX3D::spatialize },
        { "speed", vtkX3D::speed },
        { "speedFactor", vtkX3D::speedFactor },
        { "spine", vtkX3D::spine },
        { "startAngle", vtkX3D::startAngle },
        { "startTime", vtkX3D::startTime },
        { "stiffness", vtkX3D::stiffness },
        { "stopTime", vtkX3D::stopTime },
        { "string", vtkX3D::string },
        { "stripCount", vtkX3D::stripCount },
        { "style", vtkX3D::style },
        { "summary", vtkX3D::summary },
        { "tdlType", vtkX3D::tdlType },
        { "tessellation", vtkX3D::tessellation },
        { "tessellationScale", vtkX3D::tessellationScale },
        { "time", vtkX3D::time },
        { "timeOut", vtkX3D::timeOut },
        { "timestamp", vtkX3D::timestamp },
        { "title", vtkX3D::title },
        { "toggle", vtkX3D::toggle },
        { "top", vtkX3D::top },
        { "topToBottom", vtkX3D::topToBottom },
        { "topUrl", vtkX3D::topUrl },
        { "touchTime", vtkX3D::touchTime },
        { "transmitFrequencyBandwidth", vtkX3D::transmitFrequencyBandwidth },
        { "transmitState", vtkX3D::transmitState },
        { "transmitterApplicationID", vtkX3D::transmitterApplicationID },
        { "transmitterEntityID", vtkX3D::transmitterEntityID },
        { "transmitterRadioID", vtkX3D::transmitterRadioID },
        { "transmitterSiteID", vtkX3D::transmitterSiteID },
        { "transparent", vtkX3D::transparent },
        { "triggerTime", vtkX3D::triggerTime },
        { "triggerTrue", vtkX3D::triggerTrue },
        { "triggerValue", vtkX3D::triggerValue },
        { "type", vtkX3D::type },
        { "uDimension", vtkX3D::uDimension },
        { "uKnot", vtkX3D::uKnot },
        { "uOrder", vtkX3D::uOrder },
        { "uTessellation", vtkX3D::uTessellation },
        { "ulimit", vtkX3D::ulimit },
        { "vDimension", vtkX3D::vDimension },
        { "vKnot", vtkX3D::vKnot },
        { "vOrder", vtkX3D::vOrder },
        { "vTessellation", vtkX3D::vTessellation },
        { "version", vtkX3D::version },
        { "verticalDatum", vtkX3D::verticalDatum },
        { "vertices", vtkX3D::vertices },
        { "visibilityLimit", vtkX3D::visibilityLimit },
        { "visibilityRange", vtkX3D::visibilityRange },
        { "warhead", vtkX3D::warhead },
        { "weight", vtkX3D::weight },
        { "whichGeometry", vtkX3D::whichGeometry },
        { "writeInterval", vtkX3D::writeInterval },
        { "xDimension", vtkX3D::xDimension },
        { "xSpacing", vtkX3D::xSpacing },
        { "yScale", vtkX3D::yScale },
        { "zDimension", vtkX3D::zDimension },
        { "zSpacing", vtkX3D::zSpacing },
      };

    o = PyvtkX3D_X3DAttribute_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  return m;
}

void PyVTKAddFile_vtkX3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyVTKNamespace_vtkX3D();
  if (o && PyDict_SetItemString(dict, "vtkX3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

