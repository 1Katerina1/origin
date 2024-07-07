#include "parallelogram.h"

Parallelogram::Parallelogram() {};
Parallelogram::Parallelogram(int a, int b, int A, int B)
{
  name = "Параллелограмм";
  this->a = a;
  this->b = b;
  this->A = A;
  this->B = B;
  c = a;
  d = b;
  C = A;
  D = B;
};