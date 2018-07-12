/**
* @file		AnimalSilvestre.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef ANIMAL_SILVESTRE_H
#define ANIMAL_SILVESTRE_H

#include <iostream>

namespace adrd {
	/**
	 * @brief 
	 * @details 
	 * 
	 */
	class AnimalSilvestre {
	protected:
		/**
		 * @brief Contem informações da classificação do animal no ibama
		 */
		std::string ibama;
	public:
		/**
		 * @brief Construtor da classe AnimalSilvestre
		 * @details 
		 */
		AnimalSilvestre();
		virtual ~AnimalSilvestre() = 0;

		void setIbama(std::string ibama_);
		std::string getIbama();
	};

	inline AnimalSilvestre::~AnimalSilvestre()
	{}

} // adrd

#endif // ANIMAL_SILVESTRE_H
