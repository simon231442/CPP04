#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	Type_ = "wrong_cat";
}

WrongCat::WrongCat(std::string const& type) : WrongAnimal(type)
{
	Type_ = type;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src)
{
	*this = src;
}

WrongCat::~WrongCat()
{
}

WrongCat&	WrongCat::operator=(WrongCat const& src)
{
	if (this != &src)
		this->WrongAnimal::operator=(src);
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "BZZZZZT ! (WrongCat sound)" << std::endl;
}
