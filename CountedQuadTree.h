#ifndef _COUNTED_QUAD_TREE_H_
#define _COUNTED_QUAD_TREE_H_

#include <memory>
#include <utility>
#include <vector>

#include "Geometry.h"
#include "Number.h"

using namespace geometry;

class CountedQuadTree {
public:
  typedef const std::shared_ptr<const CountedQuadTree> T;
 
  static T fromPoints(Points &);

  bool contains(const Point &) const;
  virtual T cover(const Rect &) const = 0;

protected:
  CountedQuadTree(int, Rect &);

  int count;
  Rect quad;
};


class CountedQuadTreeNode : public CountedQuadTree {
public:
  CountedQuadTreeNode(int, Rect &, Points &);
  T cover(const Rect &) const;

private:
  T nw;
  T ne;
  T sw;
  T se;
};

class CountedQuadTreeLeaf : public CountedQuadTree {
public: 
  CountedQuadTreeLeaf(int, Rect &, Points &);
  T cover(const Rect &) const;

private:
  static const int maxPoints = 256;
  Points points;

};

#endif // _COUNTED_QUAD_TREE_H_
