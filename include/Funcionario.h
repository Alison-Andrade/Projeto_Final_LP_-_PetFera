#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <fstream>
#include "auxiliar.h"

namespace adrd {

	class Funcionario {
	private:
		static unsigned counterID;
	protected:
		int f_id;
		std::string f_nome;
		std::string f_cpf;
		short f_idade;
		std::string f_tipo_sanguineo;
		char f_fatorRH;
		std::string f_especialidade;

		//Metodos auxiliares para leitura e escrita
		virtual std::ostream& print(std::ostream& out) const = 0;
		virtual std::istream& read(std::istream& in) = 0;
	public:
		Funcionario();
		Funcionario(int id_, std::string nome_, std::string cpf_, short idade_,
					std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		virtual ~Funcionario();

		//Getters
		static int getCounter();

		//Sobrecarga de operadores
		friend std::ostream& operator<<(std::ostream& out, Funcionario& f);
		friend std::istream& operator>>(std::istream& in, Funcionario& f);

		virtual void save(std::string sf) = 0;
		// virtual void load(std::istream& in) const = 0;
	};

} // adrd

#endif // FUNCIONARIO_H
