#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain const &other) {
	*this = other;
}

Brain &Brain::operator=(Brain const &old) {
	if (this != &old) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = old.ideas[i];
	}
	return *this;
}

void Brain::newBrain() {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Idea ";
		std::cout << this->ideas[i] << i << std::endl;
	}
}

Brain::~Brain() {
	
}
