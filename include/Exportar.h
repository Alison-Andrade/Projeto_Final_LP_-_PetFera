/**
* @file		Exportar.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef EXPORTAR_H
#define EXPORTAR_H

#include "mPetFera.h"

namespace adrd {

	class Exportar : public mPetFera {
	private:
		std::map<int, std::shared_ptr<Animal>> expotMap;
	public:
		Exportar();

		void operator()(std::string classe, std::string tratador, std::string veterinario);

		std::map<int, std::shared_ptr<Animal>> getExportados();

		friend std::ostream& operator<<(std::ostream& out, Exportar& exp);
	};


} // adrd

#endif // EXPORTAR_H