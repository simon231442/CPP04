#include "Animal.hpp"

Animal::Animal() : Type_("animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string const& type) : Type_(type)
{
	std::cout << "Animal String constructor called" << std::endl;
}

Animal::Animal(Animal const& src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
        *this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal&		Animal::operator=(Animal const& src)
{
	if (this != &src)
		Type_ = src.Type_;
	return *this;
}

void		Animal::makeSound(void) const
{
	std::cout << "Don't know wich sound to do" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->Type_;
}
