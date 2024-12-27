#ifndef CAT_H_
#define CAT_H_

#include "Animal.h"

class Cat : public Animal
{
public:

	~Cat() override;

	virtual void makeSound() final;

};


#endif
