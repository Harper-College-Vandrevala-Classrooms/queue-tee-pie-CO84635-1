#ifndef KITTY_H
#define KITTY_H
#include "cutie.hpp"
#include <string>

class Kitty : public Cutie {
  std::string description() override {
    return "A little Kitty with small, sad eyes";
  }

  int cuteness_rating() override {
    return 8; 
  }
};

#endif // KITTY_H