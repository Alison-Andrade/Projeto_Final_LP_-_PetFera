#include "Ave.h"

namespace adrd {

	Ave::Ave()
	{}

	Ave::Ave(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, int tamanho_bico_, int envergadura_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_),
	tamanho_bico(tamanho_bico_), envergadura(envergadura_)
	{}

	Ave::~Ave()
	{}

	//Getters
	int getTamanhoBico(){
		return this->tamanho_bico;
	}
	
	int getEnvergadura(){
		return this->envergadura;
	}
	
	//Setters
	void setTamanhoBico(int tamanho_bico_){
		this->tamanho_bico = tamanho_bico_;
	}
	
	void setEnvergadura(int envergadura_){
		this->envergadura = envergadura_;
	}

} // adrd
