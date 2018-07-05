#ifndef VETERINARIO_H
#define VETERINARIO_H

#include "Funcionario.h"

namespace adrd {

	class Veterinario : public Funcionario {
	protected:
		std::string funcao = "Veterinário";
		
		void print(std::ostream& out);
		void read(std::istream in);
	public:
		Veterinario();
		~Veterinario();
	};

} // adrd

#endif // VETERINARIO_H
