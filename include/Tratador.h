/**
* @file		Tratador.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef TRATADOR_H
#define TRATADOR_H

#include "Funcionario.h"

namespace adrd {

	class Tratador : public Funcionario{
	protected:
		std::string funcao = "Tratador";

		std::ostream& print(std::ostream& out) const;
		std::istream& read(std::istream& in);
	public:
		Tratador();
		Tratador(int id_, std::string nome_, std::string cpf_, short idade_,
				std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		~Tratador();

		void save(std::string sf);
		// void load(std::istream& in) const;
	};

} // adrd

#endif // TRATADOR_H
