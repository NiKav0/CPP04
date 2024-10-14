#pragma once

#include <iostream>
#include "Animal.hpp"

class Brain {
	public:
		Brain();
		Brain(Brain const &other);
		Brain &operator=(Brain const &old);
		void newBrain();
		~Brain();
	protected:
		std::string ideas[100];
};
