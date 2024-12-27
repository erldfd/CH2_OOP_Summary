#ifndef COW_H_
#define COW_H_

#include "Animal.h"

class Cow : public Animal
{
public:

	~Cow() override;

	virtual void makeSound() override;
};

#endif // !COW_H_
