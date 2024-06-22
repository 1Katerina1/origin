#include "rectangle.h"
#include "exGeomFigError.h"

Rectangle::Rectangle(int a, int b, int A)
{
  name = "Прямоугольник";
  this->a = a;
  this->b = b;
  this->A = A;
  c = a;
  d = b;
  B = C = D = A;
  if ((A + B + C + D) != 360 && A == 90)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360°");
  }
  else if ((A + B + C + D) == 360 && A != 90)
  {
      throw exGeomFigError("Ошибка создания фигуры. Причина: не все углы равны 90°");
  }
  else if ((A + B + C + D) != 360 && A != 90)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360° и не все углы равны 90°");
  }
};