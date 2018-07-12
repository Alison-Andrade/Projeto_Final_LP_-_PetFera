#include "Anfibio.h"

namespace adrd {

	Anfibio::Anfibio()
	{}

	Anfibio::Anfibio(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, int total_mudas_, std::string ultima_muda_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_),
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
	void
	Anfibio::setTotalMudas(int total_mudas_){
		this->total_mudas = total_mudas_;
	}

	void 
	Anfibio::setUltimaMuda(std::string ultima_muda_){
		this->ultima_muda = ultima_muda_;
	}

	std::ostream&
	Anfibio::print(std::ostream& out){
		out << "# Total de mudas: " << this->total_mudas << std::endl
			<< "# Data da ultima muda: " << this->ultima_muda << std::endl;

		return out;
	}

	std::istream&
	Anfibio::read(std::istream& in){
		std::cout << "# Total de mudas: ";
		this->total_mudas = getInt(in);
		std::cout << "# Data da ultima muda: ";
		std::getline(in, this->ultima_muda);

		return in;
	}

	std::ostream& 
	Anfibio::save(std::ostream& out){
		
		out << this->id << ";" 
			<< this->classe << ";" 
			<< this->nome << ";" 
			<< this->sexo << ";" 
			<< this->cientifico << ";" 
			<< this->tamanho << ";" 
			<< this->dieta << ";" 
			<< this->veterinario << ";" 
			<< this->tratador << ";" 
			<< this->batismo << ";" 
			<< this->total_mudas << ";" 
			<< this->ultima_muda << std::endl;

		return out;

	}


} // adrd