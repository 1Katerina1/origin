#pragma once
#include <exception>
#include <stdexcept>

class exGeomFigError : public std::domain_error
{
private:
  std::string msg;
public:
exGeomFigError(const std::string& msg) : std::domain_error(msg) {};
};