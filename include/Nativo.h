/**
* @file		Nativo.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef NATIVO_H
#define NATIVO_H

#include "AnimalSilvestre.h"

namespace adrd {

	class Nativo: public AnimalSilvestre {
	protected:
		std::string uf_origem;
		std::string autorizacao;
	public:
		Nativo(){};
		virtual ~Nativo() = 0;

		// //getters
		// std::string getUF();
		// std::string getAutorizacao();

		// //setters
		// void setUF(std::string uf_);
		// void stdAutorizacao(std::string autorizacao_);
	};

	inline Nativo::~Nativo(){}

} // adrd

#endif // NATIVO_H
