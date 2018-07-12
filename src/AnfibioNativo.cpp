#include "AnfibioNativo.h"

namespace adrd {

	AnfibioNativo::AnfibioNativo()
	{}

	std::ostream&
	AnfibioNativo::print(std::ostream& out){
		out << "# Total de mudas: " << this->total_mudas << std::endl
			<< "# Data da ultima muda: " << this->ultima_muda << std::endl
			<< "# UF de origem: " << this->uf_origem << std::endl
			<< "# Permição: " << this->autorizacao << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	AnfibioNativo::read(std::istream& in){
		std::cout << "# Total de mudas: ";
		this->total_mudas = getInt(in);
		std::cout << "# Data da ultima muda: ";
		std::getline(in, this->ultima_muda);
		std::cout << "# UF de Origem: ";
		std::getline(in, this->uf_origem);
		std::cout << "# Permição: ";
		std::getline(in, this->autorizacao);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	void 
	AnfibioNativo::save(std::string sf){
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