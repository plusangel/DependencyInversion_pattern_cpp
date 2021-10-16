//
// Created by bender on 12/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_LIGHTBULB_PLAIN_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_LIGHTBULB_PLAIN_H_
#include <iostream>

class LightBulb {
 public:
  void TurnOn() {
    std::cout << "Light bulb on..." << std::endl;
  }

  void TurnOff() {
    std::cout << "Light bulb off..." << std::endl;
  }

};
#endif//DEPENDENCYINVERSION_CPP_INCLUDE_LIGHTBULB_PLAIN_H_
