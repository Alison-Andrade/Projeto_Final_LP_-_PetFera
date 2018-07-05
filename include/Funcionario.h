#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

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
		// int getID();
		// std::string getNome();
		// std::string getCPF();
		// short getIdade();
		// short getTipoSanguineo();
		// char getFatorRH();
		// std::string getEspecialidade();

		// //Setters
		// void setID(int id_);
		// void setNome(std::string nome_);
		// void setCPF(std::string cpf_);
		// void setIdade(short idade_);
		// void setTipoSanguineo(short tipo_sanguineo_);
		// void setFatorRH(char fatorRH_);
		// void setEspecialidade(std::string especialidade_);


		//Sobrecarga de operadores
		friend std::ostream& operator<<(std::ostream& out, Funcionario& f);
		friend std::istream& operator>>(std::istream& in, Funcionario& f);

		// virtual void save(std::ostream& out) const = 0;
		// virtual void load(std::istream& in) const = 0;
	};

} // adrd

#endif // FUNCIONARIO_H
