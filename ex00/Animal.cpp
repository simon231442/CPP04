#include "Animal.hpp"

Animal::Animal() : Type_("animal")
{
}

Animal::Animal(std::string const& type) : Type_(type)
{
}

Animal::Animal(Animal const& src)//est-ce que c'est la surcharge sur egal qui est utilisee??
{
	*this = src;
}

Animal::~Animal()
{
}

Animal&		Animal::operator=(Animal const& src)
{
	if (this != &src)
		Type_ = src.Type_;
	return *this;
}

void		Animal::makeSound(void)
{
	std::cout << "Don't wich sound to do" << std::endl;
}
