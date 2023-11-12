#include "animal.h"

Animal::Animal() : name_("DefaultAnimal"), age_(0), color_("Transparent") {}

void Animal::move() {
    std::cout << "Animal is moving!\n";
}

void Animal::printAttributes() {
    std::cout << "My name is " << this->name_ << '\n';
    std::cout << "My age is " << this->age_ << '\n';
    std::cout << "My color is " << this->color_ << '\n';
}
