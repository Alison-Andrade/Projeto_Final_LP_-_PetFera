#ifndef REPTIL_H
#define REPTIL_H

#include "Animal.h"

namespace adrd {

	class Reptil {
	protected:
		bool venenoso;
		std::string tipo_veneno;
	public:
		Reptil();
		Reptil(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, bool venenoso_, std::string tipo_veneno_);
		~Reptil();

		//Getters
		bool getVenenoso();
		std::string getTipoVeneno();

		//Setters
		void setVenenoso(bool venenoso_);
		void setTipoVeneno(std::string tipo_veneno_);

	};

} // adrd

#endif // REPTIL_H
