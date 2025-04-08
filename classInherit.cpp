#include <iostream>
class Animal {
public:

    virtual void makeSound() const {
        std::cout << "Generic animal sound" << std::endl;
    }
};


class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

int main() {

    Animal genericAnimal;
    Dog myDog;
    genericAnimal.makeSound();
    myDog.makeSound();

    return 0;
}
