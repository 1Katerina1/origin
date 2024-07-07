#pragma once
#include <iostream>

class Leaver
{
public:
  std::string leave(const std::string& name);
};

extern "C"
{
    Leaver* newLeaver();
}