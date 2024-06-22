#include "square.h"
#include "exGeomFigError.h"

Square::Square(int a, int A)
{
  name = "Квадрат";
  this->a = a;
  this->A = A;
  b = c = d = a;
  B = C = D = A;
  if ((A + B + C + D) != 360)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360°");
  }
  else if ((A + B + C + D) == 360 && A != 90)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: не все углы равны 90°");
  }
};