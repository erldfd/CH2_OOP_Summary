#include "Zoo.h"
#include "Animal.h"
#include <iostream>

Zoo::~Zoo()
{

	for (int i = 0; i < animalCount; ++i)
	{
		if (animals[i] == nullptr)
		{
			continue;
		}

		delete animals[i];
		animals[i] = nullptr;
	}

	if (animals)
	{
		delete[] animals;
		animals = nullptr;
	}

	//std::cout << "Zoo is destroyed" << std::endl;
}

void Zoo::addAnimal(Animal* animal)
{
	if (capacity <= animalCount)
	{
		capacity *= 2;

		Animal** oldArray = animals;
		animals = new Animal* [capacity];

		for (int i = 0; i < animalCount; ++i)
		{
			animals[i] = oldArray[i];
		}

		if (oldArray)
		{
			delete[] oldArray;
			oldArray = nullptr;
		}
	}

	animals[animalCount++] = animal;
}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; ++i)
	{
		animals[i]->makeSound();
	}
}
