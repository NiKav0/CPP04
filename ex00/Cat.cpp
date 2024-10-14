#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const &type) {
	*this = type;
}

void Cat::makeSound() const {
	std::cout << "Mmiiiiw" << std::endl;
}

Cat::Cat(std::string type) {
	*this = type;
}

Cat &Cat::operator=(Cat const &old) {
	if (this->_type != old._type)
		this->_type = old._type;
	return *this;
}

Cat::~Cat() {

}