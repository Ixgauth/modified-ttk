// Loadable modules
//
// Generated by ../../bin/vtkkwProcessXML-pv5.6
//
#ifndef __vtkSMXML_VTKmFilters_h
#define __vtkSMXML_VTKmFilters_h

#include <string.h>
#include <cassert>
#include <algorithm>


// From file /home/ian/ttk/ParaView-v5.6.0/Plugins/VTKm/VTKmSM.xml
static const char* const VTKmFiltersVTKmSMInterfaces0 =
"<ServerManagerConfiguration>\n"
"  <ProxyGroup name=\"filters\">\n"
"\n"
"    <!-- ================================================================== -->\n"
"    <SourceProxy name=\"VTKmContour\"\n"
"                 class=\"vtkmContour\"\n"
"                 label=\"VTKm Contour\">\n"
"      <Documentation\n"
"        long_help=\"Generate isolines or isosurfaces using point scalars.\"\n"
"        short_help=\"Generate isolines or isosurfaces.\">\n"
"        The VTKm Marching Cubes filter computes isolines or isosurfaces\n"
"        using a selected point-centered scalar array. It behaves similarly\n"
"        to the standard Contour filter but uses VTKm's finely threaded\n"
"        parallel algorithms.\n"
"      </Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain attribute_type=\"point\"\n"
"                          name=\"input_array\"\n"
"                          number_of_components=\"1\" />\n"
"        <Documentation>This property specifies the input dataset to be used by\n"
"        the contour filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Contour By\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"        <Documentation>This property specifies the name of the scalar array\n"
"        from which the contour filter will compute isolines and/or\n"
"        isosurfaces.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <DoubleVectorProperty animateable=\"1\"\n"
"                            command=\"SetValue\"\n"
"                            label=\"Isosurfaces\"\n"
"                            name=\"ContourValues\"\n"
"                            number_of_elements=\"0\"\n"
"                            number_of_elements_per_command=\"1\"\n"
"                            repeat_command=\"1\"\n"
"                            set_number_command=\"SetNumberOfContours\"\n"
"                            use_index=\"1\">\n"
"        <ArrayRangeDomain name=\"scalar_range\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"            <Property function=\"ArraySelection\"\n"
"                      name=\"SelectInputScalars\" />\n"
"          </RequiredProperties>\n"
"        </ArrayRangeDomain>\n"
"        <Documentation>This property specifies the values at which to compute\n"
"        isosurfaces/isolines and also the number of such\n"
"        values.</Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <PropertyGroup label=\"Isosurfaces\">\n"
"        <Property name=\"ContourValues\" />\n"
"      </PropertyGroup>\n"
"\n"
"      <IntVectorProperty animateable=\"0\"\n"
"                         command=\"SetComputeScalars\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeScalars\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>If this property is set to 1, an array of scalars\n"
"        (containing the contour value) will be added to the output dataset. If\n"
"        set to 0, the output will not contain this array.</Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmMarchingCubes -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ================================================================== -->\n"
"    <SourceProxy class=\"vtkmThreshold\"\n"
"                 name=\"VTKmThreshold\"\n"
"                 label=\"VTKm Threshold\">\n"
"      <Documentation\n"
"        long_help=\"This filter extracts cells that have point or cell scalars in the specified range.\"\n"
"        short_help=\"Extract cells that satisfy a threshold criterion.\">\n"
"        The VTKm Threshold filter extracts cells with a field that meets a\n"
"        certain criteria. It behaves similarly to the standard Contour\n"
"        filter but uses VTKm's finely threaded parallel algorithms.\n"
"      </Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain name=\"input_array\"\n"
"                          number_of_components=\"1\">\n"
"        </InputArrayDomain>\n"
"        <Documentation>This property specifies the input to the Threshold\n"
"        filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Scalars\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"        <Documentation>The value of this property contains the name of the\n"
"        scalar array from which to perform thresholding.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <DoubleVectorProperty command=\"ThresholdBetween\"\n"
"                            default_values=\"0 0\"\n"
"                            label=\"Threshold Range\"\n"
"                            name=\"ThresholdBetween\"\n"
"                            number_of_elements=\"2\"\n"
"                            panel_widget=\"double_range\">\n"
"        <ArrayRangeDomain name=\"range\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"            <Property function=\"ArraySelection\"\n"
"                      name=\"SelectInputScalars\" />\n"
"          </RequiredProperties>\n"
"        </ArrayRangeDomain>\n"
"        <Documentation>The values of this property specify the upper and lower\n"
"        bounds of the thresholding operation.</Documentation>\n"
"      </DoubleVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"      <!-- End Threshold -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ================================================================== -->\n"
"    <SourceProxy class=\"vtkmGradient\"\n"
"                 label=\"VTKm Gradient\"\n"
"                 name=\"VTKmGradient\">\n"
"      <Documentation long_help=\"Estimate the gradient for each point or cell in any type of dataset.\"\n"
"                     short_help=\"Compute gradients for any type of dataset.\">\n"
"                     The Gradient filter estimates the gradient\n"
"                     vector at each point or cell. It operates on any type of\n"
"                     vtkDataSet, and the output is the same type as the input.\n"
"                     </Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain name=\"input_array\" />\n"
"        <Documentation>This property specifies the input to the Gradient\n"
"        (Unstructured) filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Scalar Array\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"        <Documentation>This property lists the name of the scalar array from\n"
"        which to compute the gradient.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <IntVectorProperty command=\"SetComputeGradient\"\n"
"                         default_values=\"1\"\n"
"                         name=\"ComputeGradient\"\n"
"                         number_of_elements=\"1\"\n"
"                         panel_visibility=\"advanced\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>When this flag is on, the gradient filter will compute\n"
"        the gradient of the input array.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <StringVectorProperty command=\"SetResultArrayName\"\n"
"                            default_values=\"Gradients\"\n"
"                            name=\"ResultArrayName\"\n"
"                            number_of_elements=\"1\">\n"
"        <Documentation>This property provides a name for the output array\n"
"        containing the gradient vectors.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <IntVectorProperty command=\"SetFasterApproximation\"\n"
"                         default_values=\"0\"\n"
"                         name=\"FasterApproximation\"\n"
"                         number_of_elements=\"1\"\n"
"                         panel_visibility=\"advanced\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>When this flag is on, the gradient filter will provide a\n"
"        less accurate (but close) algorithm that performs fewer derivative\n"
"        calculations (and is therefore faster). The error contains some\n"
"        smoothing of the output data and some possible errors on the boundary.\n"
"        This parameter has no effect when performing the gradient of cell\n"
"        data or when the input grid is not a vtkUnstructuredGrid.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <IntVectorProperty command=\"SetComputeDivergence\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeDivergence\"\n"
"                         number_of_elements=\"1\"\n"
"                         panel_visibility=\"advanced\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>When this flag is on, the gradient filter will compute\n"
"        the divergence of a 3 component array.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <StringVectorProperty command=\"SetDivergenceArrayName\"\n"
"                            default_values=\"Divergence\"\n"
"                            name=\"DivergenceArrayName\"\n"
"                            number_of_elements=\"1\"\n"
"                            panel_visibility=\"advanced\">\n"
"        <Documentation>This property provides a name for the output array\n"
"        containing the divergence vector.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <IntVectorProperty command=\"SetComputeVorticity\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeVorticity\"\n"
"                         number_of_elements=\"1\"\n"
"                         panel_visibility=\"advanced\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>When this flag is on, the gradient filter will compute\n"
"        the vorticity/curl of a 3 component array.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <StringVectorProperty command=\"SetVorticityArrayName\"\n"
"                            default_values=\"Vorticity\"\n"
"                            name=\"VorticityArrayName\"\n"
"                            number_of_elements=\"1\"\n"
"                            panel_visibility=\"advanced\">\n"
"        <Documentation>This property provides a name for the output array\n"
"        containing the vorticity vector.</Documentation>\n"
"      </StringVectorProperty>\n"
"      <IntVectorProperty command=\"SetComputeQCriterion\"\n"
"                         default_values=\"0\"\n"
"                         name=\"ComputeQCriterion\"\n"
"                         number_of_elements=\"1\"\n"
"                         panel_visibility=\"advanced\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>When this flag is on, the gradient filter will compute\n"
"        the Q-criterion of a 3 component array.</Documentation>\n"
"      </IntVectorProperty>\n"
"      <StringVectorProperty command=\"SetQCriterionArrayName\"\n"
"                            default_values=\"Q-criterion\"\n"
"                            name=\"QCriterionArrayName\"\n"
"                            number_of_elements=\"1\"\n"
"                            panel_visibility=\"advanced\">\n"
"        <Documentation>This property provides a name for the output array\n"
"        containing Q criterion.</Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"      <!-- End UnstructuredGradient -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmLevelOfDetail\"\n"
"                 label=\"VTKm Level Of Detail\"\n"
"                 name=\"VTKmLevelOfDetail\">\n"
"      <Documentation long_help=\"It uses a structured grid of bins and merges all points contained in each bin.\"\n"
"                     short_help=\"Simplify polygonal models.\">The Level Of Detail\n"
"                     filter produces a reduced-resolution polygonal\n"
"                     approximation of the input polygonal dataset. This filter\n"
"                     is the one used by ParaView for computing LODs. It uses\n"
"                     spatial binning to reduce the number of points in the data\n"
"                     set; points that lie within the same spatial bin are\n"
;

// From file /home/ian/ttk/ParaView-v5.6.0/Plugins/VTKm/VTKmSM.xml
static const char* const VTKmFiltersVTKmSMInterfaces1 =
"                     collapsed into one representative point.</Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkPolyData\" />\n"
"        </DataTypeDomain>\n"
"        <Documentation>This property specifies the input to the Quadric\n"
"        Clustering filter.</Documentation>\n"
"      </InputProperty>\n"
"      <IntVectorProperty command=\"SetNumberOfDivisions\"\n"
"                         default_values=\"256 256 256\"\n"
"                         label=\"Number of Dimensions\"\n"
"                         name=\"NumberOfDivisions\"\n"
"                         number_of_elements=\"3\">\n"
"        <IntRangeDomain name=\"range\" />\n"
"        <Documentation>This property specifies the number of bins along the X,\n"
"        Y, and Z axes of the data set.</Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <Visibility replace_input=\"2\" />\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"      <!-- End Level Of Detail -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmAverageToPoints\"\n"
"                 label=\"VTKm Cell Data to Point Data\"\n"
"                 name=\"VTKmAverageToPoints\">\n"
"      <Documentation long_help=\"Create point attributes by averaging cell attributes.\"\n"
"                     short_help=\"Convert cell data to point data.\">The Cell\n"
"                     Data to Point Data filter averages the values of the cell\n"
"                     attributes of the cells surrounding a point to compute\n"
"                     point attributes.</Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain attribute_type=\"cell\"\n"
"                          name=\"input_array\" />\n"
"        <Documentation>This property specifies the input to the Cell Data to\n"
"        Point Data filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            name=\"SelectArray\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>This property specifies the name of the array\n"
"        to averages to cells.</Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmAverageToPoints -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmCleanGrid\"\n"
"                 label=\"VTKm Clean Unstructured Grid\"\n"
"                 name=\"VTKmCleanGrid\">\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkUnstructuredGrid\" />\n"
"        </DataTypeDomain>\n"
"        <Documentation>This property specifies the input to the Clean to Grid\n"
"        filter.</Documentation>\n"
"      </InputProperty>\n"
"      <IntVectorProperty command=\"SetCompactPoints\"\n"
"                         default_values=\"0\"\n"
"                         name=\"CompactPoints\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>Remove points that are not part of any cell.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmCleanGrid -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmClip\"\n"
"                 label=\"VTKm Clip\"\n"
"                 name=\"VTKmClip\">\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain name=\"input_array\"\n"
"                          number_of_components=\"1\"/>\n"
"        <Documentation>This property specifies the input to the VTKm Clip\n"
"        filter.</Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            label=\"Scalars\"\n"
"                            name=\"SelectInputScalars\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain attribute_type=\"Scalars\"\n"
"                         input_domain_name=\"input_array\"\n"
"                         name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <FieldDataDomain name=\"field_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </FieldDataDomain>\n"
"      </StringVectorProperty>\n"
"      <DoubleVectorProperty command=\"SetClipValue\"\n"
"                            default_values=\"0.0\"\n"
"                            name=\"ClipValue\"\n"
"                            number_of_elements=\"1\">\n"
"        <ArrayRangeDomain name=\"range\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"            <Property function=\"ArraySelection\"\n"
"                      name=\"SelectInputScalars\" />\n"
"          </RequiredProperties>\n"
"        </ArrayRangeDomain>\n"
"        <Documentation>The scalar value to use when clipping the dataset.\n"
"        Values greater than ClipValue are preserved in the output dataset.\n"
"        </Documentation>\n"
"      </DoubleVectorProperty>\n"
"      <IntVectorProperty command=\"SetComputeScalars\"\n"
"                         name=\"ComputeScalars\"\n"
"                         default_values=\"1\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>Map all point data arrays onto the output dataset.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmClip -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmExternalFaces\"\n"
"                 label=\"VTKm External Faces\"\n"
"                 name=\"VTKmExternalFaces\">\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkUnstructuredGrid\" />\n"
"        </DataTypeDomain>\n"
"        <Documentation>This property specifies the input to the filter.\n"
"        </Documentation>\n"
"      </InputProperty>\n"
"      <IntVectorProperty command=\"SetCompactPoints\"\n"
"                         default_values=\"0\"\n"
"                         name=\"CompactPoints\"\n"
"                         number_of_elements=\"1\">\n"
"        <BooleanDomain name=\"bool\" />\n"
"        <Documentation>Remove points that are not part of any output cell.\n"
"        </Documentation>\n"
"      </IntVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmExternalFaces -->\n"
"    </SourceProxy>\n"
"\n"
"    <!-- ==================================================================== -->\n"
"    <SourceProxy class=\"vtkmAverageToCells\"\n"
"                 label=\"VTKm Point Data to Cell Data\"\n"
"                 name=\"VTKmAverageToCells\">\n"
"      <Documentation long_help=\"Create cell attributes by averaging point attributes.\"\n"
"                     short_help=\"Convert point data to cell data.\">The Point\n"
"                     Data to Cell Data filter averages the values of the point\n"
"                     attributes of the points defining a cell to compute\n"
"                     cell attributes.</Documentation>\n"
"      <InputProperty command=\"SetInputConnection\"\n"
"                     name=\"Input\">\n"
"        <ProxyGroupDomain name=\"groups\">\n"
"          <Group name=\"sources\" />\n"
"          <Group name=\"filters\" />\n"
"        </ProxyGroupDomain>\n"
"        <DataTypeDomain name=\"input_type\">\n"
"          <DataType value=\"vtkDataSet\" />\n"
"        </DataTypeDomain>\n"
"        <InputArrayDomain attribute_type=\"point\"\n"
"                          name=\"input_array\" />\n"
"        <Documentation>This property specifies the input to the filter.\n"
"        </Documentation>\n"
"      </InputProperty>\n"
"      <StringVectorProperty animateable=\"0\"\n"
"                            command=\"SetInputArrayToProcess\"\n"
"                            element_types=\"0 0 0 0 2\"\n"
"                            name=\"SelectArray\"\n"
"                            number_of_elements=\"5\">\n"
"        <ArrayListDomain name=\"array_list\">\n"
"          <RequiredProperties>\n"
"            <Property function=\"Input\"\n"
"                      name=\"Input\" />\n"
"          </RequiredProperties>\n"
"        </ArrayListDomain>\n"
"        <Documentation>This property specifies the name of the array\n"
"        to averages to cells.</Documentation>\n"
"      </StringVectorProperty>\n"
"\n"
"      <Hints>\n"
"        <ShowInMenu category=\"VTKm\" />\n"
"      </Hints>\n"
"\n"
"      <!-- End VTKmAverageToCells -->\n"
"    </SourceProxy>\n"
"\n"
"  </ProxyGroup>\n"
"</ServerManagerConfiguration>\n"
"\n";
// Get single string
char* VTKmFiltersVTKmSMInterfaces()
{

  const size_t len0 = strlen(VTKmFiltersVTKmSMInterfaces0);
  const size_t len1 = strlen(VTKmFiltersVTKmSMInterfaces1);
  size_t len = ( 0
    + len0
    + len1 );
  char* res = new char[ len + 1];
  size_t offset = 0;
  std::copy(VTKmFiltersVTKmSMInterfaces0, VTKmFiltersVTKmSMInterfaces0 + len0, res + offset); offset += len0;
  std::copy(VTKmFiltersVTKmSMInterfaces1, VTKmFiltersVTKmSMInterfaces1 + len1, res + offset); offset += len1;
  assert(offset == len);
  res[offset] = 0;
  return res;
}



#endif