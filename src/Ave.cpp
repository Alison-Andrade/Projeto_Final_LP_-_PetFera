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
		out << "# Nome de Batismo: " << this->batismo << std::endl
			<< "# Tamanho do bico: " << this->tamanho_bico << std::endl
			<< "# Envergadura: " << this->envergadura << std::endl;

		return out;
	}

	std::istream&
	Ave::read(std::istream& in){
		std::cout << "# Insira as informações do animal" << std::endl;
		this->id = Animal::getCounter();
		this->classe = "Ave";
		std::cout << "# Nome: ";
		std::getline(in, this->nome);
		std::cout << "# Nome Cientifico: ";
		std::getline(in, cientifico);
		std::cout << "# Sexo: ";
		in >> sexo;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Tamanho: ";
		tamanho = getInt(in);
		std::cout << "# Dieta: ";
		std::getline(in, dieta);
		std::cout << "# ID do veterinario responsavel (0 = sem veterinario): ";
		veterinario = getInt(in);
		std::cout << "# ID do tratador responsavel (0 = sem tratador): ";
		tratador = getInt(in);
		std::cout << "# Nome de Batismo: ";
		std::getline(in, batismo);
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
