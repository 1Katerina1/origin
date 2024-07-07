#include "rhombus.h"

Rhombus::Rhombus() {};
Rhombus::Rhombus(int a, int A, int B)
{
  name = "Ромб";
  this->a = a;
  this->A = A;
  this->B = B;
  b = c = d = a;
  C = A;
  D = B;
};