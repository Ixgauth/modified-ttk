// Loadable modules
//
// Generated by ../../bin/vtkkwProcessXML-pv5.6
//
#ifndef __vtkSMXML_ArrowGlyph_h
#define __vtkSMXML_ArrowGlyph_h

#include <string.h>
#include <cassert>
#include <algorithm>


// From file /home/ian/ttk/ParaView-v5.6.0/Plugins/ArrowGlyph/vtkArrowGlyphFilter.xml
static const char* const ArrowGlyphvtkArrowGlyphFilterInterfaces0 =
"<ServerManagerConfiguration>\n"
"\n"
"  <!-- ================================================================ -->\n"
"  <!-- Filters                                                          -->\n"
"  <!-- ================================================================ -->\n"
"  <ProxyGroup name=\"filters\">\n"
"\n"
"    <!-- ================================================================ -->\n"
"    <!-- Arrow Glyph                                                      -->\n"
"    <!-- ================================================================ -->\n"
"    <SourceProxy\n"
"      name=\"ArrowGlyphFilter\"\n"
"      class=\"vtkArrowGlyphFilter\">\n"
"      <Documentation\n"
"         short_help=\"A customized Glyph filter for arrows only\">\n"
"      </Documentation>\n"
"\n"
"      <InputProperty\n"
"         name=\"Input\"\n"
"         command=\"SetInputConnection\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\"/>\n"
"          <Group name=\"filters\"/>\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\"/>\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain name=\"input_array0\"/>\n"
"        <InputArrayDomain name=\"input_array1\" attribute_type=\"point\"\n"
"                          number_of_components=\"3\" optional=\"1\"/>\n"
"        <InputArrayDomain name=\"input_array2\" attribute_type=\"point\"\n"
"                          number_of_components=\"1\" optional=\"1\"/>\n"
"        <Documentation>\n"
"          This property specifies the input to the filter.\n"
"          This is the dataset to which the glyphs will be applied.\n"
"        </Documentation>\n"
"      </InputProperty>\n"
"\n"
"      <ProxyProperty name=\"ArrowSourceObject\" command=\"SetArrowSourceObject\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\"/>\n"
"        </ProxyGroupDomain>\n"
"        <ProxyListDomain name=\"proxy_list\">\n"
"            <Proxy group=\"sources\" name=\"ArrowSource\" />\n"
"          </ProxyListDomain>\n"
"      </ProxyProperty>\n"
"\n"
"      <StringVectorProperty\n"
"        name=\"OrientationVectorArray\"\n"
"        command=\"SetOrientationVectorArray\"\n"
"        number_of_elements=\"1\"\n"
"        animateable=\"0\"\n"
"        default_values=\"direction\"\n"
"        label=\"Orientation\">\n"
"        <ArrayListDomain\n"
"          name=\"vectors\"\n"
"          attribute_type=\"Vectors\"\n"
"          none_string=\"None\"\n"
"          input_domain_name=\"input_array1\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"Input\" function=\"Input\"/>\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>\n"
"          This (mandatory) property indicates the name of the Velocity array.\n"
"        </Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <IntVectorProperty\n"
"        name=\"ScaleByOrientationVectorMagnitude\"\n"
"        command=\"SetScaleByOrientationVectorMagnitude\"\n"
"        number_of_elements=\"1\"\n"
"        animateable=\"0\"\n"
"        default_values=\"1\">\n"
"        <BooleanDomain name=\"bool\"/>\n"
"        <Documentation>\n"
"          Apply a scaling accroding to the vector magnitude\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <StringVectorProperty\n"
"        name=\"ScaleArray\"\n"
"        command=\"SetScaleArray\"\n"
"        number_of_elements=\"1\"\n"
"        animateable=\"0\"\n"
"        default_values=\"Scale\"\n"
"        label=\"Scaling Array\">\n"
"        <ArrayListDomain\n"
"          name=\"any\"\n"
"          none_string=\"None\"\n"
"          input_domain_name=\"input_array0\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"Input\" function=\"Input\"/>\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>\n"
"          The array to use for scaling glyphs\n"
"        </Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <DoubleVectorProperty\n"
"         name=\"ScaleFactor\"\n"
"         command=\"SetScaleFactor\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"1.0\" >\n"
"        <DoubleRangeDomain name=\"range\"/>\n"
"        <Documentation>\n"
"          Apply a fixed scale to the glyphs\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <StringVectorProperty\n"
"        name=\"ShaftRadiusArray\"\n"
"        command=\"SetShaftRadiusArray\"\n"
"        number_of_elements=\"1\"\n"
"        animateable=\"0\"\n"
"        default_values=\"Scale\"\n"
"        label=\"Shaft Radius Scaling Array\">\n"
"        <ArrayListDomain\n"
"          name=\"any\"\n"
"          none_string=\"None\"\n"
"          input_domain_name=\"input_array0\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"Input\" function=\"Input\"/>\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>\n"
"          The array to use for scaling shaft radius\n"
"        </Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <DoubleVectorProperty\n"
"         name=\"ShaftRadiusFactor\"\n"
"         command=\"SetShaftRadiusFactor\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"1.0\" >\n"
"        <DoubleRangeDomain name=\"range\"/>\n"
"        <Documentation>\n"
"          Apply a fixed scale to the shaft radius\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <StringVectorProperty\n"
"        name=\"TipRadiusArray\"\n"
"        command=\"SetTipRadiusArray\"\n"
"        number_of_elements=\"1\"\n"
"        animateable=\"0\"\n"
"        default_values=\"Scale\"\n"
"        label=\"Tip Radius Scaling Array\">\n"
"        <ArrayListDomain\n"
"          name=\"any\"\n"
"          none_string=\"None\"\n"
"          input_domain_name=\"input_array0\">\n"
"          <RequiredProperties>\n"
"            <Property name=\"Input\" function=\"Input\"/>\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>\n"
"          The array to use for scaling tip radius\n"
"        </Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <DoubleVectorProperty\n"
"         name=\"TipRadiusFactor\"\n"
"         command=\"SetTipRadiusFactor\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"1.0\" >\n"
"        <DoubleRangeDomain name=\"range\"/>\n"
"        <Documentation>\n"
"          Apply a fixed scale to the tip radius\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"\n"
"      <IntVectorProperty\n"
"         name=\"MaximumNumberOfPoints\"\n"
"         command=\"SetMaximumNumberOfPoints\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"5000\"\n"
"         label=\"Maximum Number of Points\">\n"
"        <IntRangeDomain name=\"range\" min=\"0\"/>\n"
"        <Documentation>\n"
"          The value of this property specifies the maximum number of glyphs that should appear in the output dataset if the value of the UseMaskPoints property is 1. (See the UseMaskPoints property.)\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <IntVectorProperty\n"
"         name=\"UseMaskPoints\"\n"
"         command=\"SetUseMaskPoints\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"1\"\n"
"         label=\"Mask Points\">\n"
"        <BooleanDomain name=\"bool\"/>\n"
"        <Documentation>\n"
"          If the value of this property is set to 1, limit the maximum number of glyphs to the value indicated by MaximumNumberOfPoints. (See the MaximumNumberOfPoints property.)\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <IntVectorProperty\n"
"         name=\"RandomMode\"\n"
"         command=\"SetRandomMode\"\n"
"         number_of_elements=\"1\"\n"
"         default_values=\"1\" >\n"
"        <BooleanDomain name=\"bool\"/>\n"
"        <Documentation>\n"
"          If the value of this property is 1, then the points to glyph are chosen randomly. Otherwise the point ids chosen are evenly spaced.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"      <Hints>\n"
"        <ShowInMenu category=\"Custom\" />\n"
"      </Hints>\n"
"\n"
"    </SourceProxy>\n"
"\n"
"  </ProxyGroup>\n"
"\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* ArrowGlyphvtkArrowGlyphFilterInterfaces()
{

  const size_t len0 = strlen(ArrowGlyphvtkArrowGlyphFilterInterfaces0);
  size_t len = ( 0
    + len0 );
  char* res = new char[ len + 1];
  size_t offset = 0;
  std::copy(ArrowGlyphvtkArrowGlyphFilterInterfaces0, ArrowGlyphvtkArrowGlyphFilterInterfaces0 + len0, res + offset); offset += len0;
  assert(offset == len);
  res[offset] = 0;
  return res;
}



#endif
