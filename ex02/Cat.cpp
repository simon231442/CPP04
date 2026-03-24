#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
        Type_ = "cat";
	brain = new Brain();
}

Cat::Cat(std::string const& type) : Animal(type)
{
	std::cout << "Cat String constructor called" << std::endl;
        Type_ = type;
	brain = new Brain();
}

Cat::Cat(Cat const& src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = new Brain(*(src.brain));
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}

Cat&	Cat::operator=(Cat const& src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
        if (this != &src)
		{
                this->Animal::operator=(src);
				if (brain)
					delete brain;
				brain = new Brain(*(src.brain));
		}
        return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "mmmmmmmmmmmmmmmiiiiiiiiiiiiiiiiiiAAAAAAAAAAAAAAAAAoooooooooooooooUUUUUUUUUUUUUUhhhhh" << std::endl;
}






