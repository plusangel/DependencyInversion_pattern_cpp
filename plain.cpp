#include "electric_power_switch_plain.h"

int main() {
  LightBulb light_bulb{};
  ElectricPowerSwitch power_switch{light_bulb};
  power_switch.press();
  power_switch.press();

  return 0;
}
