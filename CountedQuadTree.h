#ifndef _COUNTED_QUAD_TREE_H_
#define _COUNTED_QUAD_TREE_H_

#include <utility>

#include "Number.h"

typedef std::pair<Number, Number> Point;

class CountedQuadTree {

};

class CountedQuadTreeNode : public CountedQuadTree {
private:
  CountedQuadTree* nw;
  CountedQuadTree* ne;
  CountedQuadTree* sw;
  CountedQuadTree* se;
};

class CountedQuadTreeLeaf : public CountedQuadTree {
private:

};

#endif // _COUNTED_QUAD_TREE_H_
