#ifndef _COUNTED_QUAD_TREE_H_
#define _COUNTED_QUAD_TREE_H_

#include <memory>
#include <utility>
#include <vector>

#include "Number.h"

class CountedQuadTree {
  typedef std::pair<Number, Number> Point;
};

class CountedQuadTreeNode : public CountedQuadTree {
private:
  int count;

  const std::shared_ptr<CountedQuadTree> nw;
  const std::shared_ptr<CountedQuadTree> ne;
  const std::shared_ptr<CountedQuadTree> sw;
  const std::shared_ptr<CountedQuadTree> se;
};

class CountedQuadTreeLeaf : public CountedQuadTree {
private:
  static const int maxPoints = 256;
  std::vector<point> points;

  const std::shared_ptr<CountedQuadTree> split();
};

#endif // _COUNTED_QUAD_TREE_H_
