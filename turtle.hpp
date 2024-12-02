#ifndef TURTLE_H
#define TURTLE_H
#include "cutie.hpp"
#include <string>

class Turtle : public Cutie {
  std::string description() override {
    return "A tiny turtle with hard shell and a cute face";
  }

  int cuteness_rating() override {
    return 5; 
  }
};

#endif // TURTLE_H