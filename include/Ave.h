#ifndef AVE_H
#define AVE_H

#include "Animal.h"

namespace adrd {

	class Ave : public Animal{
	protected:
		int tamanho_bico;
		int envergadura;

		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		Ave();
		Ave(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_, int tamanho_bico_, int envergadura_);
		~Ave();

		//Getters
		int getTamanhoBico();
		int getEnvergadura();

		//Setters
		void setTamanhoBico(int tamanho_bico_);
		void setEnvergadura(int envergadura_);
	};

} // adrd

#endif // AVE_H
