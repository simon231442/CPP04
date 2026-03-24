#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea";
}

Brain::Brain(Brain const& src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, std::string const& idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string const& Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->ideas[index];
	static std::string empty = "";
	return empty;
}
