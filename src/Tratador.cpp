#include "Tratador.h"

namespace adrd {

	Tratador::Tratador()
	{}

	Tratador::Tratador(int id_, std::string nome_, std::string cpf_, short idade_,
					short tipo_sanguineo_, char fatorRH_, std::string especialidade_):
	Funcionario(id_, nome_, cpf_, idade_, tipo_sanguineo_, fatorRH_, especialidade_)
	{}

	Tratador::~Tratador()
	{}

	void
	Tratador::print(std::ostream& out){
		out << "# Ficha de Funcionário"
			<< "# ID: " << this->f_id << std::endl
			<< "# Função: " << this->funcao << std::endl
			<< "# Nome: " << this->f_nome << std::endl
			<< "# CPF: " << this->f_cpf << std::endl
			<< "# Idade: " << this->f_idade << std::endl
			<< "# Tipo Sanguíneo: " << this->f_tipo_sanguineo
			<< this->f_fatorRH << std::endl
			<< "# Especialidade: " << this->f_especialidade << std::endl;
	}

	void
	Tratador::read(std::istream& in){
		std::cout << "# Insira as informações do tratador" << std::endl;
		this->this->f_id = Funcionario::getCounter();
		std::cout << "# Nome: "
		in >> this->f_nome;
		std::cout << "# CPF: "
		in >> this->f_cpf;
		std::cout << "# Idade: "
		in >> this->f_idade;
		std::cout << "# Tipo Sanguíneo: "
		in >> this->f_tipo_sanguineo;
		std::cout << "# Fator RH: "
		in >> this->f_fatorRH;
		std::cout << "# Especialidade: "
		in >> this->f_especialidade;
	}

	void save(ostream& out){

	}

	void load(istream& in){

	}

} // adrd