#include "rightTriangle.h"
#include "exGeomFigError.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C)
{
  name = "Прямоугольный треугольник";
  this->a = a;
  this->b = b;
  this->c = c;
  this->A = A;
  this->B = B;
  this->C = C;
  if (C != 90 && (A + B + C == 180))
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: углол C не равен 90°");
  }
  else if (C == 90 && (A + B + C) != 180)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 180°");
  }
  else if (C != 90 && (A + B + C) != 180)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 180° и углол C не равен 90°");
  }
};