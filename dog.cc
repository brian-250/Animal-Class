#include "dog.h"

Dog::Dog() : name_("DefaultDog"), age_(20), color_("Red") {}

void Dog::dogMove() {
    std::cout << "Dog is moving!\n";
}

void Dog::printAttributes() {
    std::cout << "My name is " << this->name_ << '\n';
    std::cout << "My age is " << this->age_ << '\n';
    std::cout << "My color is " << this->color_ << '\n'; 
}