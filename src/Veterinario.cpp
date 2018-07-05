#include "Veterinario.h"
#include <limits>

namespace adrd {

	Veterinario::Veterinario()
	{}

	Veterinario::Veterinario(int id_, std::string nome_, std::string cpf_, short idade_,
					std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_):
	Funcionario(id_, nome_, cpf_, idade_, tipo_sanguineo_, fatorRH_, especialidade_)
	{}

	Veterinario::~Veterinario()
	{}

	std::ostream&
	Veterinario::print(std::ostream& out) const{
		out << "#  >>> Ficha de Funcionário <<<" << std::endl
			<< "# ID: " << this->f_id << std::endl
			<< "# Função: " << this->funcao << std::endl
			<< "# Nome: " << this->f_nome << std::endl
			<< "# CPF: " << this->f_cpf << std::endl
			<< "# Idade: " << this->f_idade << std::endl
			<< "# Tipo Sanguíneo: " << this->f_tipo_sanguineo
			<< this->f_fatorRH << std::endl
			<< "# Especialidade: " << this->f_especialidade << std::endl;

			return out;
	}

	std::istream&
	Veterinario::read(std::istream& in){
		std::cout << "# Insira as informações do tratador" << std::endl;
		this->f_id = getCounter();
		std::cout << "# Nome: ";
		std::getline(in, this->f_nome);
		std::cout << "# CPF: ";
		std::getline(in, this->f_cpf);
		std::cout << "# Idade: ";
		in >> this->f_idade;
		std::cout << "# Tipo Sanguíneo: ";
		in >> this->f_tipo_sanguineo;
		std::cout << "# Fator RH: ";
		in >> this->f_fatorRH;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Especialidade: ";
		std::getline(in, this->f_especialidade);

		return in;
	}

} // adrd