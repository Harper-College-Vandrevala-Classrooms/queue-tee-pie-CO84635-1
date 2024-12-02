#ifndef RABBIT_H
#define RABBIT_H
#include "cutie.hpp"
#include <string>

class Rabbit : public Cutie {
  std::string description() override {
    return "A cute rabbit with floppy ears!";
  }

  int cuteness_rating() override {
    return 10; 
  }
};

#endif // RABBIT_H