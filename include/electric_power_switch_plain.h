//
// Created by bender on 12/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_PLAIN_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_PLAIN_H_
#include "light_bulb_plain.h"

class ElectricPowerSwitch {
 public:
  ElectricPowerSwitch(LightBulb light_bulb) : light_bulb_{light_bulb}, on_{ false} {}

  void press() {
    if (on_) {
      light_bulb_.TurnOff();
      on_ = false;
    } else {
      light_bulb_.TurnOn();
      on_ = true;
    }
  }

 private:
  LightBulb light_bulb_;
  bool on_;
};
#endif//DEPENDENCYINVERSION_CPP_INCLUDE_ELECTRIC_POWER_SWITCH_PLAIN_H_
