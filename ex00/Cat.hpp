#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const &type);
		Cat &operator=(Cat const &old);
		~Cat();
		void makeSound() const;
};