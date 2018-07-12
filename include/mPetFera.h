/**
* @file		mPetFera.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/


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
#include "AnfibioNativo.h"
#include "AnfibioExotico.h"
#include "Animal.h"
#include "Ave.h"
#include "AveNativa.h"
#include "AveExotica.h"
#include "Funcionario.h"
#include "Mamifero.h"
#include "MamiferoNativo.h"
#include "MamiferoExotico.h"
#include "Reptil.h"
#include "ReptilNativo.h"
#include "ReptilExotico.h"
#include "Tratador.h"
#include "Veterinario.h"

namespace adrd {
	class mPetFera {
	private:
		void menu();
		bool cadastrarAnimal();
		void removerAnimal();
		void listarAnimais();
		bool cadastrarFuncionario();
		void listarFunionarios();

	protected:
		std::map<int, std::shared_ptr<Animal>> mAnimal;
		std::map<int, std::shared_ptr<Funcionario>> mFuncionario;
		
		void loadAnimais();
		void loadFuncionarios();
		void printAnimais();
		

	public:
		mPetFera();
		~mPetFera();
		void run();

		std::map<int, std::shared_ptr<Animal>>& getAnimais();
		std::map<int, std::shared_ptr<Funcionario>>& getFuncionarios();

		friend std::ostream& operator<<(std::ostream& out, mPetFera& main);
		
	};
} // adrd

#endif // M_PET_FERA_H