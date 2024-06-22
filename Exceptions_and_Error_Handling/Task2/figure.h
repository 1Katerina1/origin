#pragma once
#include <iostream>

class Figure
{
protected:
  std::string name;
  int a, b, c;
  int A, B, C;
public:
  Figure() {};
  int get_a();
  int get_b();
  int get_c();
  int get_A();
  int get_B();
  int get_C();
  std::string get_name();
};