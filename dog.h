#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
 public:
    Dog();
    Dog(const std::string& name, int age, const std::string& color, std::shared_ptr<Heart> heart);
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