#ifndef _GABOWTARJAN_H
#define _GABOWTARJAN_H

#include <iostream>
#include <vector>
#include "MatchingGraph.h"

namespace ttk {

class GabowTarjan : public Debug {

  public:

    GabowTarjan() {}

    ~GabowTarjan() {}

    template <typename dataType>
    dataType Distance(dataType maxLevel);

    template <typename dataType>
    void printCurrentMatching();

    template <typename dataType>
    int run(std::vector<matchingTuple> &matchings);

    template <typename dataType>
    inline void setInput(int rowSize_, int colSize_, void* C_)
    {
      Cptr = C_;

      auto C = (std::vector<std::vector<dataType>>*) Cptr;
      Size1 = (unsigned int) rowSize_ - 1;
      Size2 = (unsigned int) colSize_ - 1;
      if (Size1 <= 0 || Size2 <= 0) {
        std::stringstream msg;
        msg << "[Gabow-Tarjan] One or more empty diagram(s)." << std::endl;
        dMsg(std::cout, msg.str(), timeMsg);
      }

      MaxSize = Size1 + Size2;
      Edges.clear();

      // Connect diagonal points.
      for (unsigned int i = Size1; i < MaxSize; ++i)
        for (unsigned int j = MaxSize + Size2; j < 2 * MaxSize; ++j)
          Edges.emplace_back(Edge(i, j, (double) 0));

      // Connect real points.
      for (unsigned int i = 0; i < Size1; ++i) {
        unsigned int k = MaxSize;
        for (unsigned int j = 0; j < Size2; ++j) {
          auto val = (double) (*C)[i][j];
          Edges.emplace_back(Edge(i, k++, val));
        }
      }

      // Connect real points with their diagonal.
      for (unsigned int i = 0; i < Size1; ++i) {
        auto val = (double) (*C)[i][Size2];
        Edges.emplace_back(Edge(i, MaxSize + Size2 + i, val));
      }

      for (unsigned int j = 0, k = MaxSize; j < Size2; ++j, ++k) {
        auto val = (double) (*C)[Size1][j];
        Edges.emplace_back(Edge(Size1 + (k - MaxSize), k, val));
      }

      std::sort(Edges.begin(), Edges.end());
    }

    template <typename dataType>
    inline void clear() {
      MaxSize = 0;
      Size1 = 0;
      Size2 = 0;
      Edges.clear();
      Pair.clear();
      Connections.clear();
      Layers.clear();
    }

  private:

    // Original cost matrix.
    void *Cptr;

    /*
     * Total number of persistencePairs
     */
    unsigned int MaxSize;
    unsigned int Size1;
    unsigned int Size2;

    /*
     * Edges between all nodes given by
     * persistencePairs in both persistence diagrams
     */
    std::vector<Edge> Edges;

    /*
     * Pairing between vertices in persistence diagrams,
     * -1 means the vertex is not paired to any other vertex.
     * Non negative number, index of the vertex to
     * which the given vertex is paired.
     */
    std::vector<int> Pair;

    /*
     * Connection matrix, gives edges between
     * vertices in the first and second diagram
     */
    std::vector< std::vector<int> > Connections;

    /*
     * Layers used in the Hopcroft-Karp algorithm
     * The layer information is required for a NIL vertex
     * and all vertices in PersistencePairs1
     * Hence 0 slot is used for NIL and all the vertices
     * in PersistencePairs1 are shifted by one.
     * So to read layer of the vertex 0 we access Layers[1]
     */
    std::vector<int> Layers;

    template <typename dataType>
    bool DFS(int v);

    template <typename dataType>
    bool BFS();

    // Hopcroft-Karp algorithm: find a maximal matching
    template <typename dataType>
    void HopcroftKarp(unsigned int &matching);
};

// Namespace ttk
#include <GabowTarjanImpl.h>

}

#endif
