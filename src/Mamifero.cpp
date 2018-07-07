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
			<< "# Cor do pelo: " << this->cor_pelo << std::endl;

		return out;
	}

	std::istream&
	Mamifero::read(std::istream& in){
		std::cout << "# Insira as informações do animal" << std::endl;
		this->id = Animal::getCounter();
		this->classe = "Mammalia";
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
		std::cout << "# Cor do pelo: ";
		std::getline(in, this->cor_pelo);

		return in;
	}

	void 
	Mamifero::save(std::string sf){
		std::ofstream file;

		file.open(sf, std::ofstream::app);

		file << this->id << std::endl
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

		file.close();

	}

} // adrd