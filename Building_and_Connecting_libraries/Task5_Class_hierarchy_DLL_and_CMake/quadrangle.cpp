#include "quadrangle.h"

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
};
int Quadrangle::get_d() { return d; };
int Quadrangle::get_D() { return D; };
void Quadrangle::print_info(Quadrangle *quadrangle)
{
  std::cout << quadrangle->get_name() << ":" << std::endl;
  std::cout << "Стороны: a=" << quadrangle->get_a() 
                    << " b=" << quadrangle->get_b()
                    << " c=" << quadrangle->get_c()
                    << " d=" << quadrangle->get_d() << std::endl;
  std::cout << "Углы: A=" << quadrangle->get_A() 
            << " B=" << quadrangle->get_B()
            << " C=" << quadrangle->get_C()
            << " D=" << quadrangle->get_D() << std::endl;
  std::cout << std::endl;
};