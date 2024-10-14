#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &type);
		Cat &operator=(Cat const &old);
		~Cat();
		void makeSound() const;
	private:
		Brain *brain;
};