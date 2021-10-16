//
// Created by bender on 14/10/2021.
//

#ifndef DEPENDENCYINVERSION_CPP_INCLUDE_SWITCHABLE_H_
#define DEPENDENCYINVERSION_CPP_INCLUDE_SWITCHABLE_H_
class Switchable {
 public:
  virtual void TurnOn() = 0;
  virtual void TurnOff() = 0;
  virtual ~Switchable() = default;
};
#endif//DEPENDENCYINVERSION_CPP_INCLUDE_SWITCHABLE_H_
