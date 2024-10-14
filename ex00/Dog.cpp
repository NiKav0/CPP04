#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const &type) : Animal(type) {
	*this = type;
}

void Dog::makeSound() const {
	std::cout << "3aow" << std::endl;
}

Dog::Dog(std::string type) {
	this->_type = type;
}

Dog &Dog::operator=(Dog const &old) {
	if (this->_type != old._type)
		this->_type = old._type;
	return *this;
}

Dog::~Dog() {

}