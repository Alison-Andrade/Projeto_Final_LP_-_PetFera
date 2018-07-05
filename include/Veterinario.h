#ifndef VETERINARIO_H
#define VETERINARIO_H

#include "Funcionario.h"

namespace adrd {

	class Veterinario : public Funcionario {
	protected:
		std::string funcao = "Veterinário";
		
		std::ostream& print(std::ostream& out) const;
		std::istream& read(std::istream& in);
	public:
		Veterinario();
		Veterinario(int id_, std::string nome_, std::string cpf_, short idade_,
					std::string tipo_sanguineo_, char fatorRH_, std::string especialidade_);
		~Veterinario();
	};

} // adrd

#endif // VETERINARIO_H
