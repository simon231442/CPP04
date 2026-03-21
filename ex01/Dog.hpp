#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
		private:
				Brain* brain;
        public :
                Dog();
                Dog(std::string const& type);
                Dog(Dog const& src);
                ~Dog();

                Dog&		operator=(Dog const& src);
                
                void		makeSound(void) const;
};

#endif
