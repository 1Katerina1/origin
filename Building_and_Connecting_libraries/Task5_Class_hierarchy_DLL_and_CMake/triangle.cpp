#include "triangle.h"

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
};
void Triangle::print_info(Triangle *triangle)
{
  std::cout << triangle->get_name() << ":" << std::endl;
  std::cout << "Стороны: a=" << triangle->get_a() 
                    << " b=" << triangle->get_b()
                    << " c=" << triangle->get_c() << std::endl;

  std::cout << "Углы: A=" << triangle->get_A() 
            << " B=" << triangle->get_B()
            << " C=" << triangle->get_C() << std::endl;
  std::cout << std::endl;
}