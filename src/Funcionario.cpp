#include "Funcionario.h"

namespace adrd {

	unsigned Funcionario::counterID = 0;

	Funcionario::Funcionario(){
		this->counterID++;
	}

	Funcionario::Funcionario(int id_, std::string nome_, std::string cpf_, short idade_,
					std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_):
	f_id(id_), f_nome(nome_), f_cpf(cpf_), f_idade(idade_), f_tipo_sanguineo(tipo_sanguineo_),
	f_fatorRH(fatorRH_), f_especialidade(especialidade_){
		this->counterID++;
	}

	Funcionario::~Funcionario()
	{}

	std::ostream& operator<<(std::ostream& out, Funcionario& f){
		return f.print(out);
	}

	std::istream& operator>>(std::istream& in, Funcionario& f){
		return f.read(in);
	}

	//Getters
	int
	Funcionario::getCounter(){
		return counterID;
	}

	int
	Funcionario::getID(){
		return this->f_id;
	}

} // adrd