#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
protected:
  int d;
  int D;
public:
  Quadrangle();
  Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
  int get_d();
  int get_D();
  void print_info(Quadrangle *quadrangle);
};