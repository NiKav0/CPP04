#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const &type) {
	brain = new Brain();
	*this = type;
	*this->brain = *type.brain;
}

void Cat::makeSound() const {
	std::cout << "Mmiiiiw" << std::endl;
}

Cat &Cat::operator=(Cat const &old) {
	if (this->_type != old._type)
	{
		this->_type = old._type;
		delete brain;
		this->brain = new Brain();
	}
	return *this;
}

Cat::~Cat() {
		std::cout << "Cat destructor called." << std::endl;
		delete brain;
}
