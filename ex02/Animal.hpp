#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string	Type_;
	public :
		Animal();
		Animal(std::string const& type);
		Animal(Animal const& src);
		virtual ~Animal();
		
		Animal&	operator=(Animal const& src);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
