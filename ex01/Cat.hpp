#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
		private:
				Brain* brain;
        public :
                Cat();
                Cat(std::string const& type);
                Cat(Cat const& src);
                ~Cat();

                Cat&		operator=(Cat const& src);

                void		makeSound(void) const;
                };

#endif
