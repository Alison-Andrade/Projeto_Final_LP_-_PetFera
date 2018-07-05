#include "Anfibio.h"

namespace adrd {

	Anfibio::Anfibio()
	{}

	Anfibio::Anfibio(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, int total_mudas_, std::string ultima_muda_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_),
	total_mudas(total_mudas_), ultima_muda(ultima_muda_)
	{}

	Anfibio::~Anfibio()
	{}

	//Getters
	int 
	Anfibio::getTotalMudas(){
		return this->total_mudas;
	}

	std::string
	Anfibio::getUltimaMuda(){
		return this->ultima_muda;
	}

	//Setters
	void setTotalMudas(int total_mudas_){
		this->total_mudas = total_mudas_;
	}

	void setUltimaMuda(std::string ultima_muda_){
		this->ultima_muda = ultima_muda_;
	}

} // adrd