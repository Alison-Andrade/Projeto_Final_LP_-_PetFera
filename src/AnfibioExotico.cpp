#include "AnfibioExotico.h"

namespace adrd {

	AnfibioExotico::AnfibioExotico()
	{}

	std::ostream&
	AnfibioExotico::print(std::ostream& out){
		out << "# Total de mudas: " << this->total_mudas << std::endl
			<< "# Data da ultima muda: " << this->ultima_muda << std::endl
			<< "# País de origem: " << this->pais_origem << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	AnfibioExotico::read(std::istream& in){
		std::cout << "# Total de mudas: ";
		this->total_mudas = getInt(in);
		std::cout << "# Data da ultima muda: ";
		std::getline(in, this->ultima_muda);
		std::cout << "# País de Origem: ";
		std::getline(in, this->pais_origem);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	AnfibioExotico::save(std::ostream& out){
		
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
			<< this->ultima_muda << ";"
			<< "SE;"
			<< this->pais_origem << ";"
			<< this->ibama << std::endl;

		return out;

	}

} // adrd