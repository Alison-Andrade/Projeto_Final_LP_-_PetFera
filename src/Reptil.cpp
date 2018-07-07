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
		out << "#  >>> Ficha do Animal <<<" << std::endl
			<< "# ID: " << this->id << std::endl
			<< "# Classe: " << this->classe << std::endl
			<< "# Nome: " << this->nome << std::endl
			<< "# Sexo: " << this->sexo << std::endl
			<< "# Nome Cientifico: " << this->cientifico << std::endl
			<< "# Tamanho: " << this->tamanho << std::endl
			<< "# Dieta: " << this->dieta << std::endl
			<< "# ID do Veterinario: ";
			this->veterinario == 0 ? out << "Sem veterinario responsavel" << std::endl : out << this->veterinario << std::endl;
		out << "# ID do Tratador: ";
			this->tratador == 0 ? out << "Sem tratador responsavel" << std::endl : out << this->tratador << std::endl;
		out << "# Nome de Batismo: " << this->batismo << std::endl;
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
		std::cout << "# Insira as informações do animal" << std::endl;
		this->id = Animal::getCounter();
		this->classe = "Réptil";
		std::cout << "# Nome: ";
		std::getline(in, this->nome);
		std::cout << "# Nome Cientifico: ";
		std::getline(in, this->cientifico);
		std::cout << "# Sexo: ";
		in >> this->sexo;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Tamanho: ";
		in >> this->tamanho;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Dieta: ";
		std::getline(in, this->dieta);
		std::cout << "# ID do veterinario responsavel (0 = sem veterinario): ";
		in >> this->veterinario;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# ID do tratador responsavel (0 = sem tratador): ";
		in >> this->tratador;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Nome de Batismo: ";
		std::getline(in, this->batismo);
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

} // adrd