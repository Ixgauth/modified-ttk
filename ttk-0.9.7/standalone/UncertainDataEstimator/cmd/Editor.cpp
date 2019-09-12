#include                  <Editor.h>

Editor::Editor(){

  input_ = NULL;
  // reader_ = NULL;
  lastObject_ = true;


  rawReader_ = NULL;

  outputBounds_ = NULL;
  outputHistograms_ = NULL;
  // uncertainDataEstimator_ = ttkUncertainDataEstimator::New();
}

Editor::~Editor(){
  if(rawReader_) {
    rawReader_->Delete();
  }
  if(outputBounds_) {
    outputBounds_->Delete();
  }
  if(outputHistograms_) {
    outputHistograms_->Delete();
  }
}

int Editor::execute() {
  if(scalarType_ == "float") {
    computeBounds<float>();
  } else if(scalarType_ == "double") {
    computeBounds<double>();
  } else if(scalarType_ == "int") {
    computeBounds<int>();
  } else if(scalarType_ == "unsigned") {
    computeBounds<unsigned int>();
  } else if(scalarType_ == "short") {
    computeBounds<short>();
  } else if(scalarType_ == "unsignedShort") {
    computeBounds<unsigned short>();
  } else if(scalarType_ == "char") {
    computeBounds<char>();
  } else if(scalarType_ == "signedChar") {
    computeBounds<signed char>();
  } else if(scalarType_ == "unsignedChar") {
    computeBounds<unsigned char>();
  }

  return 0;
  // uncertainDataEstimator_->setDebugLevel(debugLevel_);
  // uncertainDataEstimator_->SetThreadNumber(threadNumber_);
  // uncertainDataEstimator_->SetInputData(input_);
  // uncertainDataEstimator_->SetArgument(argument_);
  // uncertainDataEstimator_->Update();
  //
  // input_->ShallowCopy(uncertainDataEstimator_->GetOutput());

}

int Editor::init(int &argc, char **argv){

  CommandLineParser parser;

  // Input directory
  parser.setArgument("l", &inputDirectory_,
    "Path to the input data set");

  // Fraction of input to consider
  string fraction_str;
  parser.setArgument("c", &fraction_str,
    "Takes only a part of the input file (syntax : \"num/den\") (default : \"1/1\")", true);

  // Output directory
  parser.setArgument("o", &outputDirectory_,
    "Path to the output directory (default : .)", true);
  parser.setArgument("p", &outputPrefix_,
    "Prefix for output files (default : \"output\")", true);

  // Input file format
  parser.setArgument("f", &inputFormat_,
    "Format of input files (raw, vti or vtu)");

  /* Input raw file options */
  parser.setOption("be", &isBigEndian_,
    "Set the byte order to big endian (default : little endian)");

  parser.setOption("ll", &isLowerLeft_,
    "Set the starting point of data at the lower left");

  parser.setArgument("s", &scalarType_,
    "Set the scalar type (default : double)", true);

  parser.setArgument("n", &dimension_,
    "Set the dimension of the file (2D or 3D) (default : 3)", true);

  parser.setArgument("x", &nx_,
    "X dimension for raw files (default : 1)", true);
  parser.setArgument("y", &ny_,
    "Y dimension for raw files (default : 1)", true);
  parser.setArgument("z", &nz_,
    "Z dimension for raw files (default : 1)", true);

  parser.setArgument("dx", &dx_,
    "X spacing for raw files (default : 1.0)", true);
  parser.setArgument("dy", &dy_,
    "Y spacing for raw files (default : 1.0)", true);
  parser.setArgument("dz", &dz_,
    "Z spacing for raw files (default : 1.0)", true);

  parser.setArgument("ox", &ox_,
    "X origin for raw files (default : 0.0)", true);
  parser.setArgument("oy", &oy_,
    "Y origin for raw files (default : 0.0)", true);
  parser.setArgument("oz", &oz_,
    "Z origin for raw files (default : 0.0)", true);


  // Number of bin for histograms
  parser.setArgument("b", &numberOfBins_,
    "Number of bins for histograms (default : 0)", true);

  // Thread number
  {
    stringstream msg;
    msg << "Thread number (default: " << OsCall::getNumberOfCores() << ")";
    parser.setArgument("t", &threadNumber_, msg.str(), true);
  }

  // now parse the command line
  parser.parse(argc, argv);

  // set default values
  if(globalDebugLevel_ < 0) {
    globalDebugLevel_ = infoMsg;
  }
  debugLevel_ = globalDebugLevel_;
  if(threadNumber_ < 1) {
    threadNumber_ = OsCall::getNumberOfCores();
  }

  numberOfBins_ = (numberOfBins_ < 0) ? 0 : numberOfBins_;
  dimension_ = (dimension_ < 0) ? 3 : dimension_;
  nx_ = (nx_ < 1) ? 1 : nx_;
  ny_ = (ny_ < 1) ? 1 : ny_;
  nz_ = (nz_ < 1) ? 1 : nz_;
  dx_ = (dx_ < 0.0) ? 1.0 : dx_;
  dy_ = (dy_ < 0.0) ? 1.0 : dy_;
  dz_ = (dz_ < 0.0) ? 1.0 : dz_;
  ox_ = (ox_ == -REAL_MAX) ? 0.0 : ox_;
  oy_ = (oy_ == -REAL_MAX) ? 0.0 : oy_;
  oz_ = (oz_ == -REAL_MAX) ? 0.0 : oz_;

  if(outputDirectory_.empty()) {
    outputDirectory_ = ".";
  }
  if(outputPrefix_.empty()) {
    outputPrefix_ = "output";
  }
  if(scalarType_.empty()) {
    scalarType_ = "double";
  }

  // Get the list of files
  if(!inputDirectory_.empty()) {
    if(inputDirectory_.back() == '/') {
      inputDirectory_.pop_back();
    }
    inputFileName_ = OsCall::listFilesInDirectory(inputDirectory_, inputFormat_);
  }
  int fraction, numberOfFractions;
  if(fraction_str.empty()) {
    numberOfFractions = 1;
    fraction = 1;
  } else {
    string num, den;
    bool slashFound(false);
    for(size_t i=0 ; i<fraction_str.size() ; i++) {
      if(fraction_str[i] != '/') {
        if(!slashFound) {
          num.push_back(fraction_str[i]);
        } else {
          den.push_back(fraction_str[i]);
        }
      } else {
        slashFound = true;
      }
    }
    if(!num.empty() && !den.empty()) {
      try {
        fraction = stoi(num);
      } catch(invalid_argument& e) {
        fraction = 1;
      } catch(out_of_range& e) {
        fraction = 1;
      }
      try {
        numberOfFractions = stoi(den);
      } catch(invalid_argument& e) {
        numberOfFractions = 1;
      } catch(out_of_range& e) {
        numberOfFractions = 1;
      }
      if(!(numberOfFractions>0) || !(fraction>0)
        || (numberOfFractions < fraction)) {
        fraction = 1;
        numberOfFractions = 1;
      }

    } else {
      fraction = 1;
      numberOfFractions = 1;
    }
  }
  if(inputFileName_.empty()) {
    stringstream msg;
    msg << "No " << inputFormat_
      << " file in directory " << inputDirectory_ << endl;
    dMsg(cerr, msg.str(), fatalMsg);
    return -1;
  } else {
    /* Selection of input files */
    double numberOfFiles = static_cast<double>(inputFileName_.size());
    double num = static_cast<double>(fraction);
    double den = static_cast<double>(numberOfFractions);
    int first = static_cast<int>( (numberOfFiles*(num-1.0)/den) + 0.5 );
    int last = static_cast<int>( (numberOfFiles*num/den) - 0.5 );
    vector<string> newList;
    newList.insert(newList.begin(), inputFileName_.begin()+first, inputFileName_.begin()+last+1);
    inputFileName_.swap(newList);
  }

  // Initialize raw data reader
  if(inputFormat_ == "raw") {
    int ret = initRawReader();
    if(ret != 0) {
      return ret;
    }
  }

  // Initialize output
  if(inputFormat_ == "raw") {
    outputBounds_ = vtkImageData::New();
    outputHistograms_ = vtkImageData::New();
  } else if(inputFormat_ == "vtu") {
    outputBounds_ = vtkUnstructuredGrid::New();
    outputHistograms_ = vtkUnstructuredGrid::New();
  } else if(inputFormat_ == "vtp") {
    outputBounds_ = vtkPolyData::New();
    outputHistograms_ = vtkPolyData::New();
  } else if(inputFormat_ == "vts") {
    outputBounds_ = vtkStructuredGrid::New();
    outputHistograms_ = vtkStructuredGrid::New();
  } else if(inputFormat_ == "vtr") {
    outputBounds_ = vtkRectilinearGrid::New();
    outputHistograms_ = vtkRectilinearGrid::New();
  } else if(inputFormat_ == "vti") {
    outputBounds_ = vtkImageData::New();
    outputHistograms_ = vtkImageData::New();
  }

  if(debugLevel_ > infoMsg) {
    stringstream msg;
    msg  << "[Editor] Directory = " << inputDirectory_ << endl;
    msg << "[Editor] " << inputFileName_.size()
    << " " << inputFormat_ << " files found in directory" << endl;
    dMsg(cout, msg.str(), infoMsg);
  }

  return 0;
}

int Editor::initRawReader() {
  if(inputFormat_ == "raw") {
    // Create reader
    if(rawReader_) {
      rawReader_->Delete();
      rawReader_ = NULL;
    }
    rawReader_ = vtkImageReader2::New();
    // Data domain
    rawReader_->SetFileDimensionality(dimension_);
    if(isLowerLeft_) {
      rawReader_->FileLowerLeftOn();
    } else {
      rawReader_->FileLowerLeftOff();
    }
    rawReader_->SetDataExtent(0, nx_-1, 0, ny_-1, 0, nz_-1);
    rawReader_->SetDataSpacing(dx_, dy_, dz_);
    rawReader_->SetDataOrigin(ox_, oy_, oz_);
    // Scalar type
    if(scalarType_ == "float") {
      rawReader_->SetDataScalarTypeToFloat();
    } else if(scalarType_ == "double") {
      rawReader_->SetDataScalarTypeToDouble();
    } else if(scalarType_ == "int") {
      rawReader_->SetDataScalarTypeToInt();
    } else if(scalarType_ == "unsigned") {
      rawReader_->SetDataScalarTypeToUnsignedInt();
    } else if(scalarType_ == "short") {
      rawReader_->SetDataScalarTypeToShort();
    } else if(scalarType_ == "unsignedShort") {
      rawReader_->SetDataScalarTypeToUnsignedShort();
    } else if(scalarType_ == "char") {
      rawReader_->SetDataScalarTypeToChar();
    } else if(scalarType_ == "signedChar") {
      rawReader_->SetDataScalarTypeToSignedChar();
    } else if(scalarType_ == "unsignedChar") {
      rawReader_->SetDataScalarTypeToUnsignedChar();
    } else {
      stringstream msg;
      msg << "Scalar type " << scalarType_ << " not supported" << endl;
      dMsg(cerr, msg.str(), fatalMsg);
      return -1;
    }
    // Byte order
    if(isBigEndian_) {
      rawReader_->SetDataByteOrderToBigEndian();
    } else {
      rawReader_->SetDataByteOrderToLittleEndian();
    }
  }
  return 0;
}

int Editor::loadData(const string &fileName) {

  if(debugLevel_ > infoMsg) {
    stringstream msg;
    msg << "[Editor] Loading file " << fileName << endl;
    dMsg(cout, msg.str(), infoMsg);
  }

  if(inputFormat_ == "raw") {
    if(!rawReader_) {
      stringstream msg;
      msg << "[Editor] Function loadData : reader not intialized" << endl;
      dMsg(cerr, msg.str(), fatalMsg);
      return -1;
    }
    input_ = NULL;
    rawReader_->SetFileName(fileName.c_str());
    rawReader_->UpdateWholeExtent();
    input_ = vtkDataSet::SafeDownCast(rawReader_->GetOutput());

  } else {
    // XML formats
    if (inputFormat_ == "vtu") {
      if(input_) {
        input_->Delete();
        input_ = NULL;
      }
      input_ = readXMLFile<vtkXMLUnstructuredGridReader>(fileName);
    } else if (inputFormat_ == "vtp") {
      if(input_) {
        input_->Delete();
        input_ = NULL;
      }
      input_ = readXMLFile<vtkXMLPolyDataReader>(fileName);
    } else if (inputFormat_ == "vts") {
      if(input_) {
        input_->Delete();
        input_ = NULL;
      }
      input_ = readXMLFile<vtkXMLStructuredGridReader>(fileName);
    } else if (inputFormat_ == "vtr") {
      if(input_) {
        input_->Delete();
        input_ = NULL;
      }
      input_ = readXMLFile<vtkXMLRectilinearGridReader>(fileName);
    } else if (inputFormat_ == "vti") {
      if(input_) {
        input_->Delete();
        input_ = NULL;
      }
      input_ = readXMLFile<vtkXMLImageDataReader>(fileName);
    } else {
      stringstream msg;
      msg << "[Editor] File format " << inputFormat_ << " not supported" << endl;
      dMsg(cerr, msg.str(), fatalMsg);
      return -2;
    }
  }

  if(input_) {
    stringstream msg;
    msg << "[Editor] Reading file " << fileName << endl;
    msg << "[Editor]   done! (read "
      << input_->GetNumberOfPoints()
      << " vertices, "
      << input_->GetNumberOfCells()
      << " cells)" << endl;
    dMsg(cout, msg.str(), infoMsg);
  } else {
    stringstream msg;
    msg << "[Editor] Error reading file " << fileName << endl;
    dMsg(cerr, msg.str(), fatalMsg);
  }

  return 0;

  // // create a reader object
  // reader_ = vtkXMLImageDataReader::New();
  // reader_->SetFileName(fileName.data());
  //
  // // handle debug messages
  // {
  //   stringstream msg;
  //   msg << "[Editor] Reading input mesh..." << endl;
  //   // choose where to display this message (cout, cerr, a file)
  //   // choose the priority of this message (1, nearly always displayed,
  //   // higher values mean lower priorities)
  //   dMsg(cout, msg.str(), 1);
  // }
  //
  // reader_->Update();
  // input_ = reader_->GetOutput();
  //
  // {
  //   stringstream msg;
  //   msg << "[Editor]   done! (read "
  //     << input_->GetNumberOfPoints()
  //     << " vertices, "
  //     << input_->GetNumberOfCells()
  //     << " cells)" << endl;
  //   dMsg(cout, msg.str(), 1);
  // }
}

int Editor::saveData() const{
  if(inputFormat_ == "raw") {
    vtkSmartPointer<vtkXMLImageDataWriter> imageWriter =
      vtkSmartPointer<vtkXMLImageDataWriter>::New();

    stringstream fileName;
    fileName << outputDirectory_;
    if(outputDirectory_.back() != '/') {
      fileName << "/";
    }
    fileName << outputPrefix_ << ".vti";

    cout << fileName.str() << endl;

    imageWriter->SetFileName(fileName.str().c_str());
    imageWriter->SetInputData(outputBounds_);
    imageWriter->SetDataModeToBinary();
    imageWriter->Write();
  } else {
    // // XML formats
    // if (inputFormat_ == "vtu") {
    //   input_ = readXMLFile<vtkXMLUnstructuredGridReader>(fileName);
    // } else if (inputFormat_ == "vtp") {
    //   input_ = readXMLFile<vtkXMLPolyDataReader>(fileName);
    // } else if (inputFormat_ == "vts") {
    //   input_ = readXMLFile<vtkXMLStructuredGridReader>(fileName);
    // } else if (inputFormat_ == "vtr") {
    //   input_ = readXMLFile<vtkXMLRectilinearGridReader>(fileName);
    // } else if (inputFormat_ == "vti") {
    //   input_ = readXMLFile<vtkXMLImageDataReader>(fileName);
    // } else if (inputFormat_ == "vto") {
    //   input_ = readXMLFile<vtkXMLHyperOctreeReader>(fileName);
    // } else if (inputFormat_ == "vtk") {
    //   input_ = readXMLFile<vtkDataSetReader>(fileName);
    // } else {
    //   stringstream msg;
    //   msg << "[Editor] File format " << inputFormat_ << " not supported" << endl;
    //   dMsg(cerr, msg.str(), fatalMsg);
    //   return -2;
    // }
  }

  // vtkXMLImageDataWriter *writer = vtkXMLImageDataWriter::New();
  //
  // writer->SetFileName(fileName.data());
  // writer->SetInputData(input_);
  // writer->Write();
  //
  // writer->Delete();

  return 0;
}
