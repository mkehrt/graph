#ifndef _COUNTED_QUAD_TREE_H_
#define _COUNTED_QUAD_TREE_H_

#include <memory>
#include <utility>
#include <vector>

#include "Number.h"

typedef const std::pair<const Number, const Number> Point;
typedef const std::pair<const Point, const Point> Rect;

class CountedQuadTree {
public:
  typedef const std::shared_ptr<const CountedQuadTree> T;
 
  static T fromPoints(const std::vector<Point>&);

  bool contains(const Point &) const;
  T cover(const Rect &) const;

private:
  CountedQuadTree();
  CountedQuadTree(const CountedQuadTree&);

  int count;
  Number xMin, yMin, xMax, yMax;
};


class CountedQuadTreeNode : public CountedQuadTree {
private:
  T nw;
  T ne;
  T sw;
  T se;
};

class CountedQuadTreeLeaf : public CountedQuadTree {
public:
  T split();

private:
  static const int maxPoints = 256;
  std::vector<Point> points;

};

#endif // _COUNTED_QUAD_TREE_H_
