#ifndef DUCKLING_H
#define DUCKLING_H
#include "cutie.hpp"
#include <string>

class Duckling : public Cutie {
  std::string description() override {
    return "A little duckling waddling with a cute beak.";
  }

  int cuteness_rating() override {
    return 8; 
  }
};

#endif // DUCKLING_H