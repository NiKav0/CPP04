#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	_D = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const &type) {
	_D = new Brain();
	*this = type;
	*this->_D = *type._D;
}

void Dog::makeSound() const {
	std::cout << "3aow" << std::endl;
}

Dog &Dog::operator=(Dog const &old) {
	if (this->_type != old._type)
	{
		this->_type = old._type;
		delete _D;
		this->_D = new Brain();
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
	delete _D;
}
