#include "ground.h"

double Ground::calculate_total_time(double distance)
{
  double total_time_without_rest = distance / speed;

  if (total_time_without_rest <= driving_time_before_rest)
  {
    return total_time_without_rest;
  }
  if ((total_time_without_rest > (driving_time_before_rest)) && (total_time_without_rest <= (driving_time_before_rest * 2)))
  {
    return total_time_without_rest + first_rest_time;
  }
  if ((total_time_without_rest > (driving_time_before_rest * 2)) && (total_time_without_rest <= (driving_time_before_rest * 3)))
  {
    return total_time_without_rest + first_rest_time + second_rest_time;
  }
  else
  {
    int number_of_stops = total_time_without_rest / driving_time_before_rest - 1;
    if (static_cast<int>(total_time_without_rest) % driving_time_before_rest > 0)
    {
      number_of_stops += 1;
    }
    if (second_rest_time == 0 && rest_time != 0)
    {
      return total_time_without_rest + first_rest_time + (number_of_stops - 1) * rest_time;
    }
    else if (second_rest_time != 0 && rest_time != 0)
    {
       return total_time_without_rest + first_rest_time + second_rest_time + (number_of_stops - 2) * rest_time;
    }
    else
    {
      return total_time_without_rest + number_of_stops * first_rest_time;
    }
  }
}