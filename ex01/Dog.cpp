#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
        Type_ = "dog";
	brain = new Brain();
}

Dog::Dog(std::string const& type) : Animal(type)
{
	std::cout << "Dog String constructor called" << std::endl;
        Type_ = type;
	brain = new Brain();
}

Dog::Dog(Dog const& src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain(*(src.brain));
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}

Dog&	Dog::operator=(Dog const& src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
        if (this != &src)
		{
                this->Animal::operator=(src);
				if (brain)
					delete brain;
				brain = new Brain(*(src.brain));
		}
        return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "wuaf wuaf" << std::endl;
}







