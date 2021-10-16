//
// Created by bender on 14/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_FAN_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_FAN_H_
#include "switchable.h"
#include <iostream>

class Fan final : public Switchable {
  void TurnOn() override {
    std::cout << "Turn on fan" << std::endl;
  }

  void TurnOff() override {
    std::cout << "Turn off fan" << std::endl;
  }

};
#endif//DEPENDENCYINVERSION_CPP_INCLUDE_FAN_H_
