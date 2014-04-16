#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_

#include "Number.h"

namespace geometry {
  typedef const std::pair<const Number, const Number> Point;
  typedef const std::pair<const Point, const Point> Rect;
  typedef const std::vector<Point> Points;
}

#endif // _GEOMETRY_H_
