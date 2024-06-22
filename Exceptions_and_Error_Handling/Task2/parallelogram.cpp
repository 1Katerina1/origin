#include "parallelogram.h"
#include "exGeomFigError.h"

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
  if ((A + B + C + D) != 360)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360°");
  }
};