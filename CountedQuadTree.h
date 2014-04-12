#ifndef _COUNTED_QUAD_TREE_H_
#define _COUNTED_QUAD_TREE_H_

#include <memory>
#include <utility>
#include <vector>

#include "Number.h"

class CountedQuadTree {
protected:
  typedef std::pair<Number, Number> Point;
private:
  CountedQuadTree();
  CountedQuadTree(const CountedQuadTree&);
};

class CountedQuadTreeNode : public CountedQuadTree {
private:
  int count;

  const std::shared_ptr<CountedQuadTree> nw;
  const std::shared_ptr<CountedQuadTree> ne;
  const std::shared_ptr<CountedQuadTree> sw;
  const std::shared_ptr<CountedQuadTree> se;
};

class CountedQuadTreeRoot : public CountedQuadTreeNode {
private:
  Number xMin, yMin, xMax, yMax;
};

class CountedQuadTreeLeaf : public CountedQuadTree {
private:
  static const int maxPoints = 256;
  std::vector<Point> points;

  const std::shared_ptr<CountedQuadTree> split();
};

#endif // _COUNTED_QUAD_TREE_H_
