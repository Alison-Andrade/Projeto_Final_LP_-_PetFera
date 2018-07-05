#include "Mamifero.h"

namespace adrd {

	Mamifero::Mamifero()
	{}

	Mamifero::Mamifero(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, std::string cor_pelo_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_),
	cor_pelo(cor_pelo_)
	{}

	Mamifero::~Mamifero()
	{}

	std::string
	Mamifero::getCorPelo(){
		return this->cor_pelo;
	}

	void
	Mamifero::setCorPelo(std::string cor_pelo_){
		this->cor_pelo = cor_pelo_;
	}

} // adrd