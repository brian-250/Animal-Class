#include "animal.h"

class Dog : public Animal {
 public:
    void move();
    void printAttributes();
 private:
    std::string name_;
    int age_;
    std::string color_;
};