#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
 public:
    Dog();
    void isDogAwake();
    void wakeUpDog();
    void sleepDog();
    void dogMove();
    void printAttributes();
    
 private:
    std::string name_;
    int age_;
    std::string color_;
    std::shared_ptr<Heart> heart_;
};

#endif