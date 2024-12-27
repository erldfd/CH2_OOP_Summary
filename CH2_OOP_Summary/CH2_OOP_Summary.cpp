#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
#include <random>

using namespace std;

Animal* createRandomAnimal()
{
    random_device rd;  
    mt19937 mersenne(rd());

    uniform_int_distribution<> distribution(0, 2);

    int randomNumber = distribution(mersenne);

    Animal* newAnimal = nullptr;

    switch (randomNumber)
    {
    case 0:
        newAnimal = new Dog();
        break;
    case 1:
        newAnimal = new Cat();
        break;
    case 2:
        newAnimal = new Cow();
        break;
    default:
        break;
    }

    return newAnimal;
}

int main()
{
    int animalCount = 3;
    Animal** animals = new Animal*[animalCount]{ new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < animalCount; ++i)
    {
        animals[i]->makeSound();
    }

    for (int i = 0 ; i < animalCount; ++i)
    { 
        delete animals[i];
        animals[i] = nullptr;
    }

    delete[] animals;
    animals = nullptr;

    cout << "----------------------------" << endl;

    Zoo* zoo = new Zoo();

    for (int i = 0; i < 10; ++i)
    {
        zoo->addAnimal(createRandomAnimal());
    }

    zoo->performActions();

    delete zoo;
    zoo = nullptr;

    return 0;
}