#ifndef WRONGALCAT_HPP
# define WRONGALCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(std::string const& type);
		WrongCat(WrongCat const& src);
		~WrongCat();

		WrongCat&	operator=(WrongCat const& src);

		void		makeSound(void) const;
};

#endif
