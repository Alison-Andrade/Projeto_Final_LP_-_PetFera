#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

namespace adrd {

	class Funcionario {
	private:
		static unsigned counterID = 0;
	protected:
		int f_id;
		std::string f_nome;
		std::string f_cpf;
		short f_idade;
		short f_tipo_sanguineo;
		char f_fatorRH;
		std::string f_especialidade;

		//Metodos auxiliares para leitura e escrita
		virtual void print(std::ostream& out) = 0;
		virtual void read(std::istream& in) = 0;
	public:
		Funcionario();
		Funcionario(int id_, std::string nome_, std::string cpf_, short idade_,
					short tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		~Funcionario();

		//Getters
		static int getCounter();
		int getID();

		//Sobrecarga de operadores
		friend std::ostream& operator<<(std::ostream& out, Funcionario& f);
		friend std::istream& operator>>(std::istream& in, Funcionario& f);

		virtual void save(ostream& out) = 0;
		virtual void load(istream& int) = 0;
	};

} // adrd

#endif // FUNCIONARIO_H
