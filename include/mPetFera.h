#ifndef M_PET_FERA_H
#define M_PET_FERA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>
#include <vector>
#include <algorithm>

#include "auxiliar.h"
#include "myExceptions.h"
#include "Anfibio.h"
#include "Animal.h"
#include "Ave.h"
#include "Funcionario.h"
#include "Mamifero.h"
#include "Reptil.h"
#include "Tratador.h"
#include "Veterinario.h"

namespace adrd {
	class mPetFera {
	private:
		std::map<int, std::shared_ptr<Animal>> mAnimal;
		std::map<int, std::shared_ptr<Funcionario>> mFuncionario;

		void menu();
		bool cadastrarAnimal();
		void listarAnimais();
		bool cadastrarFuncionario();
		void listarFunionarios();
		

	public:
		mPetFera();
		~mPetFera();
		void run();

		void loadAnimais();
		void loadFuncionarios();

		std::map<int, std::shared_ptr<Animal>>& getAnimais();
		std::map<int, std::shared_ptr<Funcionario>>& getFuncionarios();
		
	};
} // adrd

#endif // M_PET_FERA_H
