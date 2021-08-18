#include "bblog.h"
#include <iostream>

Bblog::Bblog() {}

Bblog::~Bblog() {}

void Bblog::Log() {
  std::cout << __FUNCTION__ << std::endl;
}
