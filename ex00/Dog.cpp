#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	Type_ = "dog";
}

Dog::Dog(std::string const& type) : Animal(type)
{
	Type_ = type;
}

Dog::Dog(Dog const& src) : Animal(src)
{
	*this = src;
}

Dog::~Dog()
{
}

Dog&	Dog::operator=(Dog const& src)
{
	if (this != &src)
		this->Animal::operator=(src);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "wuaf wuaf" << std::endl;
}



	



