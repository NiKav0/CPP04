#pragma once

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &old);
		Animal &operator=(Animal const &old);
		void setType(std::string type);
		const std::string getType(void) const;
		virtual void makeSound() const;
		virtual ~Animal();
	protected:
		std::string _type;
};
