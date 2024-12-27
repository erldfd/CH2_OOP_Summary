#include "Cow.h"
#include <iostream>

Cow::~Cow()
{
	//std::cout << "Cow is dead" << std::endl;
}

void Cow::makeSound()
{
	std::cout << "À½. ¸Þ. " << std::endl;
}
