#include "AveExotica.h"

namespace adrd {

	AveExotica::AveExotica()
	{}

	std::ostream&
	AveExotica::print(std::ostream& out){
		out << "# Tamanho do bico: " << this->tamanho_bico << std::endl
			<< "# Envergadura: " << this->envergadura << std::endl
			<< "# País de origem: " << this->pais_origem << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	AveExotica::read(std::istream& in){
		std::cout << "# Tamanho do bico: ";
		this->tamanho_bico = getInt(in);
		std::cout << "# Envergadura: ";
		this->envergadura = getInt(in);
		std::cout << "# País de Origem: ";
		std::getline(in, this->pais_origem);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	void 
	AveExotica::save(std::string sf){
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