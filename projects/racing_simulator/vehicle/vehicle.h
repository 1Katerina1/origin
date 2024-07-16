#pragma once
#include <string>

class Vehicle
{
protected:
  int speed = 0;
  std::string name;
public:
  Vehicle() {};
  std::string get_name();
  virtual double calculate_total_time(double distance) = 0;
};