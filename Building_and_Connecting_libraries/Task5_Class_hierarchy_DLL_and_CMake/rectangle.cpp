#include "rectangle.h"

Rectangle::Rectangle(int a, int b, int A)
{
  name = "Прямоугольник";
  this->a = a;
  this->b = b;
  this->A = A;
  c = a;
  d = b;
  B = C = D = A;
};