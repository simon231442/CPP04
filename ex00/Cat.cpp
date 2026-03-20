#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	Type_ = "cat";
}

Cat::Cat(std::string const& type) : Animal(type)
{
	Type_ = "cat";
}

Cat::Cat(Cat const& src)
{

	


