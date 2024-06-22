#include <iostream>
#include <string>

int function(std::string str, int forbidden_length)
{
  int string_length = str.length();
  if (string_length == forbidden_length)
  {
    throw "bad_length";
  }
  else
  {
    std::cout << "Длина слова \"" << str << "\" равна " << string_length << std::endl;
    return string_length;
  }
}

int main() {
  int forbidden_length = 0;
  std::string str;
  std::cout << "Введите запретную длину: ";
  std::cin >> forbidden_length;
  do
  {
    std::cout << "Введите слово: ";
    std::cin >> str;
    try
    {
      function(str, forbidden_length);
    }
    catch (const char* except)
    {
      std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
      break;
    }
  } while (true);
  
  return 0;
}