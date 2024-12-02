#ifndef PUPPY_H
#define PUPPY_H
#include "cutie.hpp"
#include <string>

class Puppy : public Cutie {
  std::string description() override {
    return "A little puppy with big, sad eyes";
  }

  int cuteness_rating() override {
    return 11; 
  }
};

#endif // PUPPY_H