#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &type);
		Dog &operator=(Dog const &old);
		~Dog();
		void makeSound() const;
};