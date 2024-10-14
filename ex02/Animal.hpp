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
		virtual ~Animal();
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};
