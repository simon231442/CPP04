#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type_("wrong_animal")
{
}

WrongAnimal::WrongAnimal(std::string const& type) : Type_(type)
{
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& src)
{
	if (this != &src)
		Type_ = src.Type_;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal generic sound..." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->Type_;
}
