/**
* @file		Mamifero.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "Animal.h"

namespace adrd {

	class Mamifero : public Animal{
	protected:
		std::string cor_pelo;

		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		Mamifero();
		Mamifero(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, std::string cor_pelo_);
		~Mamifero();

		std::string getCorPelo();
		void setCorPelo(std::string cor_pelo_);

		void save(std::string sf);
	};

} // adrd


#endif // MAMIFERO_H
