#include                  <TopologicalSimplificationHelper.h>

using namespace std;
using namespace ttk;

TopologicalSimplificationHelper::TopologicalSimplificationHelper():
  triangulation_{},
  vertexNumber_{},
  constraintNumber_{},
  inputScalarFieldPointer_{},
  vertexIdentifierScalarFieldPointer_{},
  inputOffsetScalarFieldPointer_{},
  considerIdentifierAsBlackList_{},
  outputScalarFieldPointer_{},
  outputOffsetScalarFieldPointer_{},
  helperScalarFieldPointer_{}
{
  considerIdentifierAsBlackList_ = false;
}

TopologicalSimplificationHelper::~TopologicalSimplificationHelper(){
}

