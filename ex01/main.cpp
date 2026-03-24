#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "--- Standard Subject Tests ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n--- Array Tests ---" << std::endl;
	int array_size = 4;
	Animal* animals[array_size];
	
	for (int k = 0; k < array_size / 2; ++k)
		animals[k] = new Dog();
	for (int k = array_size / 2; k < array_size; ++k)
		animals[k] = new Cat();
	
	for (int k = 0; k < array_size; ++k)
		animals[k]->makeSound();

	for (int k = 0; k < array_size; ++k)
		delete animals[k];

	std::cout << "\n--- Deep Copy Tests ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	} // tmp gets destroyed here, basic's brain should still be valid!

std::cout << "\n--- End of tests ---" << std::endl;
return 0;
}
