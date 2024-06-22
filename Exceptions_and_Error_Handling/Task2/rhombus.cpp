#include "rhombus.h"
#include "exGeomFigError.h"

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
  if ((A + B + C + D) != 360)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360°");
  }
};