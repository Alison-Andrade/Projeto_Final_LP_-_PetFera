/**
* @file		Funcionario.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <fstream>
#include "auxiliar.h"

namespace adrd {

	/**
	 * @brief Definição da Classe Funcionário
	 * @details 
	 * 
	 */
	class Funcionario {
	private:
		/**
		 * @brief Contador de obgetos da classe Funcionário
		 * @details Utilizado para gerar id's dos Funcionários
		 */
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
		/**
		 * @brief Construtor padrão da classe Funcionario
		 * @details
		 */
		Funcionario();
		/**
		 * @brief Construtor parametrizado da classe Funcionario
		 * @details Recebe todos os atributos como parametro para gerar os dados do novo funcionário
		 * 
		 */
		Funcionario(int id_, std::string nome_, std::string cpf_, short idade_,
					std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		virtual ~Funcionario();

		//Getters
		/**
		 * @brief Método estático de acesso ao contador da classe
		 * @return counterID
		 */
		static int getCounter();

		//Sobrecarga de operadores
		friend std::ostream& operator<<(std::ostream& out, Funcionario& f);
		friend std::istream& operator>>(std::istream& in, Funcionario& f);

		virtual void save(std::string sf) = 0;
		// virtual void load(std::istream& in) const = 0;
	};

} // adrd

#endif // FUNCIONARIO_H
