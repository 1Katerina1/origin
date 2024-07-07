#include "air.h"

double Air::calculate_total_time(double distance)
{
  if (second_distance_reduction_factor == 0.94)
  {
    return distance * second_distance_reduction_factor / speed;
  }
  if (first_distance_reduction_factor == 0)
  {
    first_distance_reduction_factor = static_cast<int>(distance) / 1000;      
    first_distance_reduction_factor = (100 - first_distance_reduction_factor) / 100;
    return distance * first_distance_reduction_factor / speed;
  }
  if (distance < 1000)
  {
    return distance / speed;
  }
  else if (distance >= 1000 && distance < 5000)
  {
    return distance * second_distance_reduction_factor / speed;
  }
  else if (distance >= 5000 && distance < 10000)
  {
    return distance * third_distance_reduction_factor / speed;
  }
  else
  {
    return distance * fourth_distance_reduction_factor / speed;
  }
}