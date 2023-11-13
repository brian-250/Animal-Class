#include "animal.h"
#include "heart.h"

Animal::Animal() : name_("DefaultAnimal"), age_(10), color_("Peach"), heart_(std::make_shared<Heart>(false)) {}

void Animal::isAnimalAwake() {
    if (this->heart_->heartBeat() == true) {
        std::cout << "Animal is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Animal is sleeping\n";
    }
}

void Animal::wakeUpAnimal() {
    this->heart_->setHeartBeat(true);
    if (this->heart_->heartBeat() == true) {
        std::cout << "Animal is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Animal is sleeping\n";
    }
}

void Animal::sleepAnimal() {
    this->heart_->setHeartBeat(false);
    if (this->heart_->heartBeat() == true) {
        std::cout << "Animal is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Animal is sleeping\n";
    }
}

void Animal::animalMove() {
    std::cout << "Animal is moving!\n";
}

void Animal::printAttributes() {
    std::cout << "My name is " << this->name_ << '\n';
    std::cout << "My age is " << this->age_ << '\n';
    std::cout << "My color is " << this->color_ << '\n';
}
