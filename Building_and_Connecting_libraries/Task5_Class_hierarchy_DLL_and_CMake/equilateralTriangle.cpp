#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a)
{
  name = "Равносторонний треугольник";
  this->a = a;
  b = c = a;
  A = B = C = 60;
};