#include "animal.h"
#include "heart.h"

Animal::Animal() : name_("DefaultAnimal"), age_(10), color_("Peach"), heart_(std::make_shared<Heart>()) {}

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

Animal& Animal::operator=(const Animal& other) {
    // Check if pointer of this instance is not pointing to itself to avoid unecessary assignments
    if (this != &other) {
    // Assign member variable data from 'other' to 'this'
    this->name_ = other.name_;
    this->age_ = other.age_;
    this->color_ = other.color_;
    this->heart_->setHeartBeat(other.heart_->heartBeat());

    return *this;
    }
}