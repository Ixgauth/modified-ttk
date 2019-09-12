/// \ingroup base
/// \class ttk::BottleneckDistance 
/// \author Maxime Soler <soler.maxime@total.com>
#ifndef _BOTTLENECKDISTANCE_H
#define _BOTTLENECKDISTANCE_H

#ifndef diagramTuple
#define diagramTuple std::tuple<int, ttk::CriticalType, int, \
  ttk::CriticalType, dataType, int, \
  dataType, float, float, float, dataType, float, float, float>
#endif

#ifndef matchingTuple
#define matchingTuple std::tuple<int, int, double>
#endif

#ifndef trackingTuple
#define trackingTuple std::tuple<int, int, std::vector<int>>
#endif
// start ts, end ts or -1, list of indices for every ts

#ifndef BNodeType
#define BNodeType ttk::CriticalType
#define BLocalMax ttk::CriticalType::Local_maximum
#define BLocalMin ttk::CriticalType::Local_minimum
#define BSaddle1  ttk::CriticalType::Saddle1
#define BSaddle2  ttk::CriticalType::Saddle2
#define BIdVertex int
#endif

// base code includes
#include                  <Triangulation.h>
#include                  <Wrapper.h>
#include                  <PersistenceDiagram.h>
#include                  <Munkres.h>
#include                  <GabowTarjan.h>

#include                  <string>
#include                  <tuple>
#include                  <functional>

namespace ttk {

  class BottleneckDistance : public Debug {

  public:

    BottleneckDistance():
      distance_(-1),
      wasserstein_("inf"),
      pvAlgorithm_(-1),
      zeroThreshold_(0),
      px_(0),
      py_(0),
      pz_(0),
      pe_(0),
      ps_(0)
    {};

    ~BottleneckDistance() {};

    template <typename dataType>
    int execute(bool usePersistenceMetric);

    inline int setPersistencePercentThreshold(double t) {
      zeroThreshold_ = t;
      return 0;
    }

    inline int setPX(double px) { px_ = px; return 0; }
    inline int setPY(double py) { py_ = py; return 0; }
    inline int setPZ(double pz) { pz_ = pz; return 0; }
    inline int setPE(double pe) { pe_ = pe; return 0; }
    inline int setPS(double ps) { ps_ = ps; return 0; }

    inline int setCTDiagram1(void *diagram) {
      outputCT1_ = diagram;
      return 0;
    }

    inline int setCTDiagram2(void *diagram) {
      outputCT2_ = diagram;
      return 0;
    }

    inline int setOutputMatchings(void* matchings) {
      matchings_ = matchings;
      return 0;
    }

    inline int setAlgorithm(const std::string &algorithm) {
      algorithm_ = algorithm;
      return 0;
    }

    inline int setPVAlgorithm(const int algorithm) {
      pvAlgorithm_ = algorithm;
      return 0;
    }

    inline int setWasserstein(const std::string &wasserstein) {
      wasserstein_ = wasserstein;
      return 0;
    }

    inline void message(const char* s)
    {
      std::stringstream msg;
      msg << s << std::endl;
      dMsg(std::cout, msg.str(), timeMsg);
    }

    double getDistance() {
      return distance_;
    }

    template<typename type>
    static type abs(const type var) {
      return (var >= 0) ? var : -var;
    }

    template<typename type>
    static type abs_diff(const type var1, const type var2) {
      return (var1 > var2) ? var1 - var2 : var2 - var1;
    }

  protected:

    void                      *outputCT1_;
    void                      *outputCT2_;
    void                      *matchings_; // ids from CT1 to CT2
    double                    distance_;

    std::string               wasserstein_;
    std::string               algorithm_;
    int                       pvAlgorithm_;
    double                    zeroThreshold_;
    double                    px_;
    double                    py_;
    double                    pz_;
    double                    pe_;
    double                    ps_;

  private:

    template <typename dataType>
    int computeBottleneck(
      const std::vector<diagramTuple> &d1,
      const std::vector<diagramTuple> &d2,
      std::vector<matchingTuple> &matchings,
      bool usePersistenceMetric);

    template <typename dataType>
    double computeGeometricalRange(
      const std::vector<diagramTuple> &CTDiagram1,
      const std::vector<diagramTuple> &CTDiagram2,
      int d1Size,
      int d2Size) const;

    template <typename dataType>
    double computeMinimumRelevantPersistence(
      const std::vector<diagramTuple> &CTDiagram1,
      const std::vector<diagramTuple> &CTDiagram2,
      int d1Size,
      int d2Size) const;

    template <typename dataType>
    void computeMinMaxSaddleNumberAndMapping(
      const std::vector<diagramTuple> &CTDiagram,
      int dSize,
      int &nbMin,
      int &nbMax,
      int &nbSaddle,
      std::vector<int> &minMap,
      std::vector<int> &maxMap,
      std::vector<int> &sadMap,
      dataType zeroThresh);

    template <typename dataType>
    void buildCostMatrices(
      const std::vector<diagramTuple> &CTDiagram1,
      const std::vector<diagramTuple> &CTDiagram2,
      int d1Size,
      int d2Size,
      std::function<dataType (const diagramTuple, const diagramTuple)>& distanceFunction,
      std::function<dataType (const diagramTuple)>& diagonalDistanceFunction,
      double zeroThresh,
      std::vector<std::vector<dataType>> &minMatrix,
      std::vector<std::vector<dataType>> &maxMatrix,
      std::vector<std::vector<dataType>> &sadMatrix,
      bool reverseMin,
      bool reverseMax,
      bool reverseSad,
      int wasserstein);

    template <typename dataType>
    void solvePWasserstein(
      int nbRow,
      int nbCol,
      std::vector<std::vector<dataType>> &matrix,
      std::vector<matchingTuple> &matchings,
      Munkres &solver);

    template <typename dataType>
    void solveInfinityWasserstein(
      int nbRow,
      int nbCol,
      int nbRowToCut,
      int nbColToCut,
      std::vector<std::vector<dataType>> &matrix,
      std::vector<matchingTuple> &matchings,
      GabowTarjan &solver);

    template <typename dataType>
    dataType buildMappings(
      const std::vector<matchingTuple> &inputMatchings,
      bool transposeGlobal,
      bool transposeLocal,
      std::vector<matchingTuple> &outputMatchings,
      const std::vector<int> &m1,
      const std::vector<int> &m2,
      int wasserstein);
  };

// Include in namespace ttk
#include <BottleneckDistanceImpl.h>
#include <BottleneckDistanceMainImpl.h>

}

#endif // _H
