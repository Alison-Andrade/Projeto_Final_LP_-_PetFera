/**
* @file		Exotico.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef EXOTICO_H
#define EXOTICO_H

#include "AnimalSilvestre.h"

namespace adrd {

	class Exotico: public AnimalSilvestre{
	protected:
		std::string pais_origem;
	public:
		Exotico();
		virtual ~Exotico() = 0;

		std::string getPais();
		void setPais(std::string pais_);
	};

	inline Exotico::~Exotico()
	{}

} // adrd

#endif // EXOTICO_H
