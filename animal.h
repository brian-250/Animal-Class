#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
 public:
  Animal();
  void isAnimalAwake();
  void wakeUpAnimal();
  void sleepAnimal();
  void animalMove();
  void printAttributes();

 private:
  std::string name_;
  int age_;
  std::string color_;
};

#endif