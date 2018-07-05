#include "Reptil.h"

namespace adrd {

	Reptil::Reptil()
	{}

	Reptil::Reptil(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, bool venenoso_, std::string tipo_veneno_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_),
	venenoso(venenoso_), tipo_veneno(tipo_veneno_)
	{}

	Reptil::~Reptil()
	{}

	//Getters
	bool
	Reptil::getVenenoso(){
		return this->venenoso;
	}

	std::string
	Reptil::getTipoVeneno(){
		return this->tipo_veneno;
	}

	//Setters
	void
	Reptil::setVenenoso(bool venenoso_){
		this->venenoso = venenoso_;
	}

	void
	Reptil::setTipoVeneno(std::string tipo_veneno_){
		this->tipo_veneno = tipo_veneno_;
	}

} // adrd