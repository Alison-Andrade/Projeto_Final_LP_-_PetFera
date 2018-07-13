#include "MamiferoExotico.h"

namespace adrd {

	MamiferoExotico::MamiferoExotico()
	{}

	std::ostream&
	MamiferoExotico::print(std::ostream& out){
		out << "# Cor do pelo: " << this->cor_pelo << std::endl
			<< "# País de origem: " << this->pais_origem << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	MamiferoExotico::read(std::istream& in){
		std::cout << "# Cor do pelo: ";
		std::getline(in, this->cor_pelo);
		std::cout << "# País de Origem: ";
		std::getline(in, this->pais_origem);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	MamiferoExotico::save(std::ostream& out){
		
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
			<< this->cor_pelo << ";"
			<< "SE;"
			<< this->pais_origem << ";"
			<< this->ibama << std::endl;

		return out;

	}

} // adrd