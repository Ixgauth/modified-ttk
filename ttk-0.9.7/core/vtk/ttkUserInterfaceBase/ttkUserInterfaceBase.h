/// \ingroup vtk
/// \class ttkUserInterfaceBase
/// \author Julien Tierny <julien.tierny@lip6.fr>.
/// \date March 2017.
///
/// \brief Interactions and rendering.

#ifndef _TTK_USERINTERFACE_BASE_H
#define _TTK_USERINTERFACE_BASE_H

#include                  <ttkProgramBase.h>

// VTK includes
#include                  <vtkDataSetSurfaceFilter.h>
#include                  <vtkInteractorStyleSwitch.h>
#include                  <vtkInteractorStyleTrackballCamera.h>
#include                  <vtkObjectFactory.h>
#include                  <vtkPNGReader.h>
#include                  <vtkPolyDataMapper.h>
#include                  <vtkProperty.h>
#include                  <vtkRenderer.h>
#include                  <vtkRenderWindow.h>
#include                  <vtkRenderWindowInteractor.h>
#include                  <ttkTextureMapFromField.h>
#include                  <vtkVRMLExporter.h>

// forward declaration
class ttkUserInterfaceBase;

// Custom interactors
class ttkCustomInteractor : public vtkInteractorStyleTrackballCamera{

  public:
    
    static ttkCustomInteractor* New();
    
    vtkTypeMacro(ttkCustomInteractor, vtkInteractorStyleTrackballCamera);
    
    virtual void OnKeyPress();
    
    inline int setUserInterface(ttkUserInterfaceBase *userInterface){
      
      userInterface_ = userInterface;
      return 0;
    };
    
  protected:
    ttkUserInterfaceBase  *userInterface_;  
};

class ttkKeyHandler : public ttk::Debug{
  
  public:
    
    virtual int OnKeyPress(
      vtkRenderWindowInteractor *interactor, std::string &key) = 0;
};

class VTKFILTERSCORE_EXPORT ttkUserInterfaceBase : public ttkProgramBase {
  
  public:
    
    ttkUserInterfaceBase();
    
    ~ttkUserInterfaceBase();
   
    int exportScene(const std::string &fileName = "output.wrl") const;
    
    ttkKeyHandler* getKeyHandler() { return keyHandler_;};

    int hideOutputs(const std::vector<int> &outputList){

      for(int i = 0; i < (int) outputList.size(); i++){
        bool isAlreadyIn = false;
        for(int j = 0; j < (int) hiddenOutputs_.size(); j++){
          if(outputList[i] == hiddenOutputs_[j]){
            isAlreadyIn = true;
            break;
          }
        }
        if(!isAlreadyIn)
          hiddenOutputs_.push_back(outputList[i]);
      }

      return 0;
    }

    int init(int &argc, char **argv);
  
    int refresh();

    int run();
    
    int setKeyHandler(ttkKeyHandler *handler){
      keyHandler_ = handler;
      return 0;
    }

    int switchOutput(const int &outputId);

    int switchTransparency();

  protected:
    
    bool                          hasTexture_, isUp_, repeat_, transparency_, fullscreen_;
    std::vector<bool>                  visibleOutputs_;
    std::vector<int>                   hiddenOutputs_;
    ttkKeyHandler                 *keyHandler_;
    std::vector<vtkPolyData *>         surfaces_;
    vtkSmartPointer<ttkCustomInteractor>
                                  customInteractor_;
    std::vector<vtkSmartPointer<vtkActor> >
                                  mainActors_;
    std::vector<vtkSmartPointer<vtkDataSetSurfaceFilter> >
                                  boundaryFilters_;
    vtkSmartPointer<vtkPNGReader> pngReader_;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> >
                                  boundaryMappers_;
    vtkSmartPointer<vtkRenderer>  renderer_;
    vtkSmartPointer<vtkRenderWindow>
                                  renderWindow_;
    vtkSmartPointer<vtkRenderWindowInteractor>
                                  interactor_;
    vtkSmartPointer<vtkTexture>   texture_;
    std::vector<vtkSmartPointer<ttkTextureMapFromField> >
                                  textureMapFromFields_;
    
    int updateScalarFieldTexture();
};

template <class ttkModule>
  class vtkUserInterface : public ttkUserInterfaceBase{
  
  public:
    
    vtkUserInterface(){
      ttkObject_ = vtkSmartPointer<ttkModule>::New();
      vtkWrapper_ = (vtkDataSetAlgorithm *) ttkObject_.GetPointer();
      ttkModule_ = (Debug *) ttkObject_.GetPointer();
    };
    
    virtual int run(){
      
      ttkObject_->setDebugLevel(ttk::globalDebugLevel_);
      ttkObject_->setThreadNumber(parser_.getThreadNumber());
      
      return ttkUserInterfaceBase::run();
    }
    
    vtkSmartPointer<ttkModule>    ttkObject_;
};

#endif //_TTK_USERINTERFACE_BASE_H
