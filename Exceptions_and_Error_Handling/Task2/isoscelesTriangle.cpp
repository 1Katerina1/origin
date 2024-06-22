#include "isoscelesTriangle.h"
#include "exGeomFigError.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
{
  name = "Равнобедренный треугольник";
  this->a = a;
  this->b = b;
  this->A = A;
  this->B = B;
  c = a;
  C = A;
  if ((A + B + C) != 180)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 180°");
  }
};