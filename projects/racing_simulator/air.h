#pragma once
#include "vehicle.h"

class Air : public Vehicle
{
protected:
  double first_distance_reduction_factor = 0;
  double second_distance_reduction_factor = 0;
  double third_distance_reduction_factor = 0;
  double fourth_distance_reduction_factor = 0;
public:
  Air() {};
  double calculate_total_time(double distance) override;
};