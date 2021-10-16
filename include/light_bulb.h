//
// Created by bender on 14/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_LIGHT_BULB_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_LIGHT_BULB_H_
#include "switchable.h"
#include <iostream>

class LightBulb final : public Switchable {
  void TurnOn() override {
    std::cout << "Turn on light bulb" << std::endl;
  }

  void TurnOff() override {
    std::cout << "Turn off light bulb" << std::endl;
  }

};
#endif//DEPENDENCYINVERSION_CPP_INCLUDE_LIGHT_BULB_H_
