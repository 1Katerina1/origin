#include <iostream>

class Fraction
{
private:
  int numerator_;
  int denominator_;

public:
  int get_numerator() { return numerator_; }
  int get_denominator() { return denominator_; }
  Fraction(int numerator, int denominator)
  {
    numerator_ = numerator;
    denominator_ = denominator;
  }
  void print()
  {
    int gcd = GCD(numerator_, denominator_);
    if (denominator_ / gcd == 1)
    {
      std::cout << numerator_ / gcd << std::endl;
    }
    else if (denominator_ < 0)
    {
      std::cout << -numerator_ / gcd << "/" << -denominator_ / gcd << std::endl;
    }
    else
    {
      std::cout << numerator_ / gcd << "/" << denominator_ / gcd << std::endl;
    }
  }
  Fraction operator+(Fraction right)
  {
    int resNum = numerator_ * right.denominator_ + right.numerator_ * denominator_;
    int resDenom = denominator_ * right.denominator_;
    int gcd = GCD(resNum, resDenom);
    return Fraction(resNum / gcd, resDenom / gcd);
  }
  Fraction operator-(Fraction right)
  {
    int resNum = numerator_ * right.denominator_ - right.numerator_ * denominator_;
    int resDenom = denominator_ * right.denominator_;
    int gcd = GCD(resNum, resDenom);
    return Fraction(resNum / gcd, resDenom / gcd);
  }
  Fraction operator*(Fraction right)
  {
    int resNum = numerator_ * right.numerator_;
    int resDenom = denominator_ * right.denominator_;
    int gcd = GCD(resNum, resDenom);
    return Fraction(resNum / gcd, resDenom / gcd);
  }
  Fraction operator/(Fraction right)
  {
    int resNum = numerator_ * right.denominator_;
    int resDenom = denominator_ * right.numerator_;
    int gcd = GCD(resNum, resDenom);
    return Fraction(resNum / gcd, resDenom / gcd);
  }
 // Если мы перегружаем унарный оператор внутри класса, то не нужно указывать тип операнда
  Fraction operator++() // префиксный инкремент
  {
    numerator_ = denominator_ + numerator_;
    int gcd = GCD(numerator_, denominator_);
    return Fraction(numerator_ / gcd, denominator_ / gcd);
  }
// нужно сохранить предыдущее значение объекта в отдельную переменную, потом изменить значение объекта,
// и вернуть через return предыдущее значение:
  Fraction operator++(int) // постфиксный инкремент
  {
    int tmp = numerator_;
    numerator_ = denominator_ + numerator_;
    int gcd = GCD(numerator_, denominator_);
    return Fraction(tmp / gcd, denominator_ / gcd);
  }
  Fraction operator--() // префиксный декремент
  {
    numerator_ = numerator_ - denominator_;
    int gcd = GCD(numerator_, denominator_);
    return Fraction(numerator_ / gcd, denominator_ / gcd);
  }
  Fraction operator--(int) // постфиксный декремент
  {
    int tmp = numerator_;
    numerator_ = numerator_ - denominator_;
    int gcd = GCD(numerator_, denominator_);
    return Fraction(tmp / gcd, denominator_ / gcd);
  }
  int GCD(int a, int b) // нахождение НОД
  {
    if (b == 0) { return a; }
    return GCD(b, a % b);
  }
};

int main()
{
  int numerator_1, denominator_1, numerator_2, denominator_2;
  std::cout << "Введите числитель дроби 1: ";
  std::cin >> numerator_1;
  do
  {
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denominator_1;
    if (denominator_1 == 0)
    {
      std::cout << "Знаменатель дроби не может равняться 0" << std::endl;
    }
  } while (denominator_1 == 0);
  std::cout << "Введите числитель дроби 2: ";
  std::cin >> numerator_2;
  do
  {
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denominator_2;
    if (denominator_2 == 0)
    {
      std::cout << "Знаменатель дроби не может равняться 0" << std::endl;
    }
  } while (denominator_2 == 0);
  
  Fraction f1(numerator_1, denominator_1);
  Fraction f2(numerator_2, denominator_2);

  std::cout << f1.get_numerator() << "/" << f1.get_denominator() << " + "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (f1 + f2).print();
  std::cout << f1.get_numerator() << "/" << f1.get_denominator() << " - "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (f1 - f2).print();
  std::cout << f1.get_numerator() << "/" << f1.get_denominator() << " * "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (f1 * f2).print();
  std::cout << f1.get_numerator() << "/" << f1.get_denominator() << " / "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (f1 / f2).print();
  std::cout << "++" << f1.get_numerator() << "/" << f1.get_denominator() << " * "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (++f1 * f2).print();
  std::cout << "Значение дроби 1 = ";
  f1.print();
  std::cout << f1.get_numerator() << "/" << f1.get_denominator() << "--" << " * "
            << f2.get_numerator() << "/" << f2.get_denominator() << " = ";
  (f1-- * f2).print();
  std::cout << "Значение дроби 1 = ";
  f1.print();

  return 0;
}