#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &type);
		Dog &operator=(Dog const &old);
		~Dog();
		void makeSound() const;
	private:
		Brain *_D;
};