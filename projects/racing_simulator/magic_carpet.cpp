#include "magic_carpet.h"

MagicCarpet::MagicCarpet()
{
  name = "Ковёр-самолёт";
  speed = 10;
  first_distance_reduction_factor = 1;
  second_distance_reduction_factor = 0.97;
  third_distance_reduction_factor = 0.9;
  fourth_distance_reduction_factor = 0.95;
}