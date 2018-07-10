/**
* @file		Anfibio.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef ANFIBIO_H
#define ANFIBIO_H

#include "Animal.h"

namespace adrd {

	class Anfibio : public Animal {
	protected:
		int total_mudas;
		std::string ultima_muda;

		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		Anfibio();
		Anfibio(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, int total_mudas_, std::string ultima_muda_);
		~Anfibio();

		//Getters
		int getTotalMudas();
		std::string getUltimaMuda();

		//Setters
		void setTotalMudas(int total_mudas_);
		void setUltimaMuda(std::string ultima_muda_);

		void save(std::string sf);
	};

} // ardr

#endif // ANFIBIO_H
