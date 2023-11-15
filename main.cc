#include "animal.h"
#include "dog.h"

int main() {
   Dog dog1;
   dog1.isDogAwake();
   dog1.wakeUpDog();
   dog1.dogMove();
   dog1.printAttributes();


   Animal animal1;
   animal1.isAnimalAwake();
   animal1.wakeUpAnimal();
   animal1.isAnimalAwake();
   animal1.animalMove();
   animal1.printAttributes();




   return 0;
}