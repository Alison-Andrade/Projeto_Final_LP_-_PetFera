#ifndef TRATADOR_H
#define TRATADOR_H

#include "Funcionario.h"

namespace adrd {

	class Tratador : public Funcionario{
	protected:
		std::string funcao = "Tratador";

		void print(std::ostream& out);
		void read(std::istream in);
	public:
		Tratador();
		Tratador(int id_, std::string nome_, std::string cpf_, short idade_,
					short tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		~Tratador();

		void save(ostream& out);
		void load(istream& in);
	};

} // adrd

#endif // TRATADOR_H
