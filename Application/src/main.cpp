#include <iostream>
#include "MyLibrary.h"

int main() {
    std::cout << "Creating an entity from the library" << std::endl;

    //Create an entity
    MyLibrary::Entity* myEntity = new MyLibrary::Entity();
    myEntity->Name = "Name";
    myEntity->Number = 2;
    
    //Now double the number value of the entity
    MyLibrary::DoubleTheNumberValue(*myEntity);
    
    std::cout << "The new value of the entity is: " << myEntity->Number << std::endl;

    delete myEntity;
}