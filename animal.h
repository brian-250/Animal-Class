#ifndef ANIMAL_H
#define ANIMAL_H

#include "heart.h"

#include <iostream>

class Animal {
 public:
  Animal();
  void isAnimalAwake();
  void wakeUpAnimal();
  void sleepAnimal();
  void animalMove();
  void printAttributes();
  Animal& operator=(const Animal& other);

 private:
  std::string name_;
  int age_;
  std::string color_;
  std::shared_ptr<Heart> heart_;
};

#endif