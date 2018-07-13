#include "ReptilExotico.h"

namespace adrd {

	ReptilExotico::ReptilExotico()
	{}

	std::ostream&
	ReptilExotico::print(std::ostream& out){
		if(this->venenoso == true) {
			out << "# Animal venenoso" << std::endl
				<< "# Tipo de veneno: " << this->tipo_veneno;
		}else{
			out << "# Não venenoso" << std::endl;
		}

		out << "# País de origem: " << this->pais_origem << std::endl
			<< "# Classificação no IBAMA: " << this->ibama << std::endl;

		return out;
	}

	std::istream&
	ReptilExotico::read(std::istream& in){
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
		
		std::cout << "# País de Origem: ";
		std::getline(in, this->pais_origem);
		std::cout << "# Classificação no IBAMA: ";
		std::getline(in, this->ibama);

		return in;
	}

	std::ostream& 
	ReptilExotico::save(std::ostream& out){
		
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
			<< this->venenoso << ";" 
			<< this->tipo_veneno << ";"
			<< "SE;"
			<< this->pais_origem << ";"
			<< this->ibama << std::endl;

		return out;

	}

} // adrd