#include <iostream>

class Animal {
 public:
  Animal();
  void move();
  void printAttributes();
 private:
  std::string name_;
  int age_;
  std::string color_;
};