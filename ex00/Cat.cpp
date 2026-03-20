#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	Type_ = "cat";
}

Cat::Cat(std::string const& type) : Animal(type)
{
	Type_ = type;
}

Cat::Cat(Cat const& src) : Animal(src)
{
	*this = src;
}

Cat::~Cat()
{
}

Cat&	Cat::operator=(Cat const& src)
{
	if (this != &src)
		this->Animal::operator=(src);
	return *this;
}

void	Cat::makeSound(void)
{
	std::cout << "mmmmmmmmmmmmmmmiiiiiiiiiiiiiiiiiiAAAAAAAAAAAAAAAAAoooooooooooooooUUUUUUUUUUUUUUhhhhh" << std::endl;
}



	


