#include <iostream>
#include <memory>
#include "Funcionario.h"
#include "Tratador.h"
#include "Veterinario.h"

int main(int argc, char const *argv[]){
	
	std::unique_ptr<adrd::Funcionario> t(new adrd::Tratador);

	std::cin >> *t;
	std::cout << *t;

	std::unique_ptr<adrd::Funcionario> t2(new adrd::Veterinario);

	std::cin >> *t2;
	std::cout << *t2;

	return 0;
}