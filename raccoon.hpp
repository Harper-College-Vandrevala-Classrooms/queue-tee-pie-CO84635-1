#ifndef RACCOON_H
#define RACCOON_H
#include "cutie.hpp"
#include <string>

class Raccoon : public Cutie {
  std::string description() override {
    return "A Raccoon with small hands";
  }

  int cuteness_rating() override {
    return 6; 
  }
};

#endif // RACCOON_H