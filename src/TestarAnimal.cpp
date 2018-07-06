#include <iostream>
#include <memory>

#include "Animal.h"
#include "Anfibio.h"

int main(int argc, char const *argv[]){
	
	// std::unique_ptr<adrd::Animal> a1(new adrd::Ave);
	// std::cin >> a1;

	// std::unique_ptr<adrd::Animal> a2(new adrd::Mamifero);
	// std::cin >> a2;

	// std::unique_ptr<adrd::Animal> a3(new adrd::Reptil);
	// std::cin >> a3;

	std::unique_ptr<adrd::Animal> a4(new adrd::Anfibio);
	std::cin >> *a4;


	// std::cout << a1;
	// std::cout << a2;
	// std::cout << a3;
	std::cout << *a4;

	return 0;
}