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
#include "exGeomFigError.h"

int main()
{
  try
  {
    Triangle triangle(10, 20, 30, 50, 60, 80);
    triangle.print_info(&triangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    RightTriangle rightTriangle(10, 20, 30, 30, 60, 90);
    rightTriangle.print_info(&rightTriangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    isoscelesTriangle.print_info(&isoscelesTriangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    EquilateralTriangle equilateralTriangle(30);
    equilateralTriangle.print_info(&equilateralTriangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    quadrangle.print_info(&quadrangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    Rectangle rectangle(10, 20, 90);
    rectangle.print_info(&rectangle);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    Square square(20, 90);
    square.print_info(&square);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    Parallelogram parallelogram(20, 30, 70, 110);
    parallelogram.print_info(&parallelogram);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  try
  {
    Rhombus rhombus(30, 120, 60);
    rhombus.print_info(&rhombus);
  }
  catch (exGeomFigError& e)
  {
    std::cerr << e.what() << std::endl;
    std::cout << std::endl;
  }

  return 0;
}