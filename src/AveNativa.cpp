#include "AveNativa.h"

namespace adrd {

	AveNativa::AveNativa()
	{}

	std::ostream&
	AveNativa::print(std::ostream& out){
		out << "# Tamanho do bico: " << this->tamanho_bico << " cm" << std::endl
			<< "# Envergadura: " << this->envergadura << " cm" << std::endl
			<< "# UF de origem: " << this->uf_origem << std::endl
			<< "# Permição: " << this->autorizacao << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	AveNativa::read(std::istream& in){
		std::cout << "# Tamanho do bico: ";
		this->tamanho_bico = getInt(in);
		std::cout << "# Envergadura: ";
		this->envergadura = getInt(in);
		std::cout << "# UF de Origem: ";
		std::getline(in, this->uf_origem);
		std::cout << "# Permição: ";
		std::getline(in, this->autorizacao);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	AveNativa::save(std::ostream& out){
		
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
				<< ";" << this->tamanho_bico
				<< ";" << this->envergadura << ";"
				<< "SN;"
				<< this->uf_origem << ";"
				<< this->autorizacao << ";"
				<< this->ibama << std::endl;

		return out;

	}

} // adrd