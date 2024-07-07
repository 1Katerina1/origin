#include "leaver.h"

extern "C"
{
  Leaver* newLeaver()
  {
    return new Leaver();
  }
}

std::string Leaver::leave(const std::string& name)
{
  return "До свидания, " + name + "!";
}