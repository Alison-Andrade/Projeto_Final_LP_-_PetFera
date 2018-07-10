#include "Ave.h"

namespace adrd {

	Ave::Ave()
	{}

	Ave::Ave(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, int tamanho_bico_, int envergadura_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_),
	tamanho_bico(tamanho_bico_), envergadura(envergadura_)
	{}

	Ave::~Ave()
	{}

	//Getters
	int 
	Ave::getTamanhoBico(){
		return this->tamanho_bico;
	}
	
	int 
	Ave::getEnvergadura(){
		return this->envergadura;
	}
	
	//Setters
	void 
	Ave::setTamanhoBico(int tamanho_bico_){
		this->tamanho_bico = tamanho_bico_;
	}
	
	void 
	Ave::setEnvergadura(int envergadura_){
		this->envergadura = envergadura_;
	}

	std::ostream&
	Ave::print(std::ostream& out){
		out << "# Tamanho do bico: " << this->tamanho_bico << std::endl
			<< "# Envergadura: " << this->envergadura << std::endl;

		return out;
	}

	std::istream&
	Ave::read(std::istream& in){
		std::cout << "# Tamanho do bico: ";
		tamanho_bico = getInt(in);
		std::cout << "# Envergadura: ";
		envergadura = getInt(in);

		return in;
	}

	void 
	Ave::save(std::string sf){
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
				<< ";" << this->tamanho_bico
				<< ";" << this->envergadura << std::endl;
		}

		file.close();

	}

} // adrd
