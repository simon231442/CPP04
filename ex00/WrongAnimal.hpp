#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string	Type_;
	public :
		WrongAnimal();
		WrongAnimal(std::string const& type);
		WrongAnimal(WrongAnimal const& src);
		~WrongAnimal(); // <-- ICI EST L'ERREUR DELIBEREE : Pas de mot-clé 'virtual' sur le destructeur
		
		WrongAnimal&	operator=(WrongAnimal const& src);

		void	makeSound(void) const; // <-- ICI EST L'ERREUR DELIBEREE : Pas de mot-clé 'virtual'
		std::string		getType(void) const;
};

#endif
