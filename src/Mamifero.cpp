#include "Mamifero.h"

namespace adrd {

	Mamifero::Mamifero()
	{}

	Mamifero::Mamifero(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, std::string cor_pelo_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_),
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

	std::ostream&
	Mamifero::print(std::ostream& out){
		out << "# Cor do pelo: " << this->cor_pelo << std::endl;

		return out;
	}

	std::istream&
	Mamifero::read(std::istream& in){
		std::cout << "# Cor do pelo: ";
		std::getline(in, this->cor_pelo);

		return in;
	}

	void 
	Mamifero::save(std::string sf){
		std::ofstream file(sf, std::ofstream::app);

		if(file) {
			file << this->id
				<< ";" << this->classe
				<< ";" << this->nome
				<< ";" << this->sexo
				<< ";" << this->cientifico
				<< ";" << this->tamanho
				<< ";" << this->dieta
				<< ";" << this->veterinario
				<< ";" << this->tratador
				<< ";" << this->batismo
				<< ";" << this->cor_pelo << std::endl;
		}

		file.close();

	}

} // adrd