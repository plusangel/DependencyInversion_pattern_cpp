//
// Created by bender on 14/10/2021.
//
#include "electric_power_switch.h"
#include "light_bulb.h"
#include "fan.h"


int main() {
  LightBulb light_bulb{};
  Fan fan{};

  ElectricPowerSwitch switch1{light_bulb};
  switch1.press();
  switch1.press();

  ElectricPowerSwitch switch2{fan};
  switch2.press();
  switch2.press();

  return 0;
}
