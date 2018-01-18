#ifndef CIRCLE_HH_
#define CIRCLE_HH_

#include "shape.hh"
#include "point.hh"

class Rectangle : public Shape {
  Point point1_;
  Point point2_;
public:
  Rectangle(Point point1, Point point2);
  void print() const;
  Point get_point1() const;
  Point get_point2() const;
  void set_point1(Point point1);
  void set_point2(Point point2);
};

#endif
