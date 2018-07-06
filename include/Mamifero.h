#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "Animal.h"

namespace adrd {

	class Mamifero {
	protected:
		std::string cor_pelo;

		std::istream& read(istream& in);
		std::ostream& print(ostream& out);
	public:
		Mamifero();
		Mamifero(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_, std::string cor_pelo_);
		~Mamifero();

		std::string getCorPelo();
		void setCorPelo(std::string cor_pelo_);
	};

} // adrd


#endif // MAMIFERO_H
