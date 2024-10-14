#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	for (int f = 0; f < 4; f++)
	{
		j->makeSound();
		i->makeSound();
	}
	delete j;
	delete i;
	system("leaks Animalv2.0");
}
