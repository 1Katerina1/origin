#include "triangle.h"
#include "exGeomFigError.h"

Triangle::Triangle() {};
Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
  name = "Треугольник";
  this->a = a;
  this->b = b;
  this->c = c;
  this->A = A;
  this->B = B;
  this->C = C;
  if ((A + B + C) != 180)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 180°");
  }
};
void Triangle::print_info(Triangle *triangle)
{
  std::cout << triangle->get_name() <<
                       " (стороны " << triangle->get_a() 
                            << ", " << triangle->get_b()
                            << ", " << triangle->get_c() 
                            << "; "
                            << "углы " << triangle->get_A() 
                            << ", " << triangle->get_B()
                            << ", " << triangle->get_C()
                            << ") создан" << std::endl;
  std::cout << std::endl;
}