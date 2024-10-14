#include "Animal.hpp"

Animal::Animal() : _type("Undefined") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(std::string type) {
	this->_type = type;
}

Animal::Animal(Animal const &old) {
	this->_type = old._type;
}

Animal &Animal::operator=(Animal const &old) {
	if (this->_type != old._type)
		this->_type = old._type;
	return *this;
}

void Animal::setType(std::string type) {
	this->_type = type;
}

const std::string Animal::getType(void) const{
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << "Loud silence..." << std::endl;
	return;
}

Animal::~Animal() {
	std::cout << "Destructor called." << std::endl;
}
