#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string	Type_;
	public :
		Animal();
		Animal(std::string const& type);
		Animal(Animal const& src);
		~Animal();
		
		Animal&	operator=(Animal const& src);

		void	makeSound(void);
};

#endif
