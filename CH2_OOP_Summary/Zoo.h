#ifndef ZOO_H_
#define ZOO_H_

class Animal;
class Zoo
{
public:

	~Zoo();
	
	void addAnimal(Animal* animal);
	void performActions();

private:

	Animal** animals = new Animal* [10];
	int animalCount = 0;
	int capacity = 10;
};

#endif