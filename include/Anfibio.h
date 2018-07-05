#ifndef ANFIBIO_H
#define ANFIBIO_H

#include "Animal.h"
#include "Nativo.h"
#include "Exotico.h"

namespace ardr {

	class Anfibio : public Animal{
	protected:
		int total_mudas;
		std::string ultima_muda;
	public:
		Anfibio();
		Anfibio(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, int total_mudas_, std::string ultima_muda_);
		~Anfibio();

		//Getters
		int getTotalMudas();
		std::string getUltimaMuda();

		//Setters
		void setTotalMudas(int total_mudas_);
		void setUltimaMuda(std::string ultima_muda_);
	};

} // ardr

#endif // ANFIBIO_H
