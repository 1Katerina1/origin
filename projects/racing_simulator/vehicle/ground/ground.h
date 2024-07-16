#pragma once
#include "../vehicle.h"

class Ground : public Vehicle
{
protected:
  int driving_time_before_rest = 0;
  int first_rest_time = 0; // время первого отдыха
  double second_rest_time = 0; // время второго отдыха
  int rest_time = 0; // время каждого следующего отдыха
public:
  Ground() {};
  double calculate_total_time(double distance) override;
};