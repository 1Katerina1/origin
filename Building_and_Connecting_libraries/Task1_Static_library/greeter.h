#pragma once
#include <iostream>

class Greeter
{
public:
// const перед std::string указывает на то, что name является константным, т.е. метод greet не будет изменять содержимое строки name
  std::string greet(const std::string& name);
};