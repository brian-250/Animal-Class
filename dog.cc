#include "dog.h"

Dog::Dog() : name_("DefaultDog"), age_(20), color_("Red"), heart_(std::make_shared<Heart>()) {}

Dog::Dog(const std::string& name, int age, const std::string& color, std::shared_ptr<Heart> heart) : name_(name), age_(age), color_(color), heart_(heart) {}

void Dog::isDogAwake() {
    if (this->heart_->heartBeat() == true) {
        std::cout << "Dog is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Dog is sleeping\n";
    }
}

void Dog::wakeUpDog() {
    this->heart_->setHeartBeat(true);
    if (this->heart_->heartBeat() == true) {
        std::cout << "Dog is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Dog is sleeping\n";
    }
}

void Dog::sleepDog() {
    this->heart_->setHeartBeat(false);
    if (this->heart_->heartBeat() == true) {
        std::cout << "Dog is awake\n";
    } else if (this->heart_->heartBeat() == false) {
        std::cout << "Dog is sleeping\n";
    }
}

void Dog::dogMove() {
    std::cout << "Dog is moving!\n";
}

void Dog::printAttributes() {
    std::cout << "My name is " << this->name_ << '\n';
    std::cout << "My age is " << this->age_ << '\n';
    std::cout << "My color is " << this->color_ << '\n'; 
}