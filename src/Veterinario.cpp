#include "Tratador.h"

namespace adrd {

	Veterinario::Veterinario()
	{}

	Veterinario::Veterinario(int id_, std::string nome_, std::string cpf_, short idade_,
					short tipo_sanguineo_, char fatorRH_, std::string especialidade_):
	Funcionario(id_, nome_, cpf_, idade_, tipo_sanguineo_, fatorRH_, especialidade_)
	{}

	Veterinario::~Veterinario()
	{}

} // adrd