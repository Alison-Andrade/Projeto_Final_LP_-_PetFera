#include "ReptilNativo.h"

namespace adrd {

	ReptilNativo::ReptilNativo()
	{}

	std::ostream&
	ReptilNativo::print(std::ostream& out){
		if(this->venenoso == true) {
			out << "# Animal venenoso" << std::endl
				<< "# Tipo de veneno: " << this->tipo_veneno;
		}else{
			out << "# Não venenoso" << std::endl;
		}

		out << "# UF de origem: " << this->uf_origem << std::endl
			<< "# Permição: " << this->autorizacao << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	ReptilNativo::read(std::istream& in){
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
		
		std::cout << "# UF de Origem: ";
		std::getline(in, this->uf_origem);
		std::cout << "# Permição: ";
		std::getline(in, this->autorizacao);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	ReptilNativo::save(std::ostream& out){
		
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
				<< ";" << this->venenoso
				<< ";" << this->tipo_veneno << ";"
				<< "SN;"
				<< this->uf_origem << ";"
				<< this->autorizacao << ";"
				<< this->ibama << std::endl;

		return out;

	}

} // adrd