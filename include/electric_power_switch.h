//
// Created by bender on 14/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_H_
#include "switchable.h"

class ElectricPowerSwitch {
 public:
  ElectricPowerSwitch(Switchable &switchable) : switchable_{switchable}, on_{false} {}
  void press() {
    if (on_) {
      switchable_.TurnOff();
      on_ = false;
    } else {
      switchable_.TurnOn();
      on_ = true;
    }
  }
 private:
  bool on_;
  Switchable &switchable_;
};

#endif//DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_H_
