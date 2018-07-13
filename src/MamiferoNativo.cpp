#include "MamiferoNativo.h"

namespace adrd {

	MamiferoNativo::MamiferoNativo()
	{}

	std::ostream&
	MamiferoNativo::print(std::ostream& out){
		out << "# Cor do pelo: " << this->cor_pelo << std::endl
			<< "# UF de origem: " << this->uf_origem << std::endl
			<< "# Permição: " << this->autorizacao << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	MamiferoNativo::read(std::istream& in){
		std::cout << "# Cor do pelo: ";
		std::getline(in, this->cor_pelo);
		std::cout << "# UF de Origem: ";
		std::getline(in, this->uf_origem);
		std::cout << "# Permição: ";
		std::getline(in, this->autorizacao);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	MamiferoNativo::save(std::ostream& out){
		
		out << this->id
				<< ";" << this->classe
				<< ";" << this->nome
				<< ";" << this->sexo
				<< ";" << this->cientifico
				<< ";" << this->tamanho
				<< ";" << this->dieta
				<< ";" << this->veterinario
				<< ";" << this->tratador
				<< ";" << this->batismo
				<< ";" << this->cor_pelo << ";"
				<< "SN;"
				<< this->uf_origem << ";"
				<< this->autorizacao << ";"
				<< this->ibama << std::endl;

		return out;

	}

} // adrd