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
			<< "# Total de mudas: " << this->total_mudas << std::endl
			<< "# Data da ultima muda: " << this->ultima_muda << std::endl;

		return out;
	}

	std::istream&
	Anfibio::read(std::istream& in){
		std::cout << "# Insira as informações do animal" << std::endl;
		this->id = Animal::getCounter();
		this->classe = "Amphibia";
		std::cout << "# Nome: ";
		std::getline(in, this->nome);
		std::cout << "# Nome Cientifico: ";
		std::getline(in, this->cientifico);
		std::cout << "# Sexo: ";
		in >> this->sexo;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Tamanho: ";
		this->tamanho = getInt(in);
		std::cout << "# Dieta: ";
		std::getline(in, this->dieta);
		std::cout << "# ID do veterinario responsavel (0 = sem veterinario): ";
		this->veterinario = getInt(in);
		std::cout << "# ID do tratador responsavel (0 = sem tratador): ";
		this->tratador = getInt(in);
		std::cout << "# Nome de Batismo: ";
		std::getline(in, this->batismo);
		std::cout << "# Total de mudas: ";
		this->total_mudas = getInt(in);
		std::cout << "# Data da ultima muda: ";
		std::getline(in, this->ultima_muda);

		return in;
	}

	void 
	Anfibio::save(std::string sf){
		std::ofstream file(sf, std::ofstream::app);

		if(file) {
			file << this->id << ";" 
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
		}

		std::cout << "Animal cadastrado..." << std::endl << std::endl;

		file.close();

	}


} // adrd