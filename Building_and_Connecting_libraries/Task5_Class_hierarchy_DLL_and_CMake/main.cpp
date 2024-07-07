#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"

int main()
{
  Triangle triangle(10, 20, 30, 50, 60, 70);
  triangle.print_info(&triangle);

  RightTriangle rightTriangle(10, 20, 30, 50, 60);
  rightTriangle.print_info(&rightTriangle);

  IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
  isoscelesTriangle.print_info(&isoscelesTriangle);

  EquilateralTriangle equilateralTriangle(30);
  equilateralTriangle.print_info(&equilateralTriangle);

  Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
  quadrangle.print_info(&quadrangle);

  Rectangle rectangle(10, 20, 90);
  rectangle.print_info(&rectangle);

  Square square(20, 90);
  square.print_info(&square);

  Parallelogram parallelogram(20, 30, 30, 40);
  parallelogram.print_info(&parallelogram);

  Rhombus rhombus(30, 30, 40);
  rhombus.print_info(&rhombus);

  return 0;
}