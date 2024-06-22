#include "quadrangle.h"
#include "exGeomFigError.h"

Quadrangle::Quadrangle() {};
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
  name = "Четырёхугольник";
  this->a = a;
  this->b = b;
  this->c = c;
  this->d = d;
  this->A = A;
  this->B = B;
  this->C = C;
  this->D = D;
  if ((A + B + C + D) != 360)
  {
    throw exGeomFigError("Ошибка создания фигуры. Причина: сумма углов не равна 360°");
  }
};
int Quadrangle::get_d() { return d; };
int Quadrangle::get_D() { return D; };
void Quadrangle::print_info(Quadrangle *quadrangle)
{
  std::cout << quadrangle->get_name() <<
                         " (стороны " << quadrangle->get_a() 
                              << ", " << quadrangle->get_b()
                              << ", " << quadrangle->get_c()
                              << ", " << quadrangle->get_d()
                              << "; " <<
                              "углы " << quadrangle->get_A() 
                              << ", " << quadrangle->get_B()
                              << ", " << quadrangle->get_C()
                              << ", " << quadrangle->get_D()
                              << ") создан" << std::endl;
  std::cout << std::endl;
};