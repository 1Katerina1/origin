#include <iostream>
#include "greeter.h"

int main() {
  std::string name;
  std::cout << "Введите имя: ";
  std::cin >> name;
  Greeter g;
  std::cout << g.greet(name) << std::endl;
}