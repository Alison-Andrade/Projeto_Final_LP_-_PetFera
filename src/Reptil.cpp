#include "Reptil.h"

namespace adrd {

	Reptil::Reptil()
	{}

	Reptil::Reptil(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, bool venenoso_, std::string tipo_veneno_):
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_),
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

	std::ostream&
	Reptil::print(std::ostream& out){
		if(this->venenoso == true) {
			out << "# Animal venenoso" << std::endl
				<< "# Tipo de veneno: " << this->tipo_veneno;
		}else{
			out << "# Não venenoso";
		}

		return out;
	}

	std::istream&
	Reptil::read(std::istream& in){
		std::cout << "# Animal venenoso? (s/n): ";
		char venenoso_;
		in >> venenoso_;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if(venenoso_ == 's') {
			this->venenoso = true;

			std::cout << "# Tipo de veneno: ";
			std::getline(in, this->tipo_veneno);
		}else{
			this->venenoso = false;
			this->tipo_veneno = "-";
		}

		return in;
	}

	void 
	Reptil::save(std::string sf){
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
				<< ";" << this->venenoso
				<< ";" << this->tipo_veneno << std::endl;

		}
		file.close();

	}

} // adrd