#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <limits>

#include "myExceptions.h"
#include "auxiliar.h"

namespace adrd {

	class Animal {
	private:
		static unsigned counterID;
	protected:
		int id;
		std::string classe;
		std::string nome;
		std::string cientifico;
		char sexo;
		float tamanho;
		std::string dieta;
		int veterinario;
		int tratador;
		std::string batismo;

		virtual std::istream& read(std::istream& in) = 0;
		virtual std::ostream& print(std::ostream& out) = 0;
	public:
		Animal();
		Animal(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_);
		~Animal();

		// Getters
		static int getCounter();
		int getID();
		std::string getClasse();
		std::string getNome();
		std::string getCientifico();
		char getSexo();
		float getTamanho();
		std::string getDieta();
		int getVeterinario();
		int getTratador();
		std::string getBatismo();

		//Setters
		void setID(int id_);
		void setClasse(std::string classe_);
		void setNome(std::string nome_);
		void setCientifico(std::string cientifico_);
		void setSexo(char sexo_);
		void setTamanho(float tamanho_);
		void setDieta(std::string dieta_);
		void setVeterinario(int veterinario_);
		void setTratador(int tratador_);
		void setBatismo(std::string batismo_);

		//Sobrecargas
		friend std::istream& operator>>(std::istream& in, Animal& a);
		friend std::ostream& operator<<(std::ostream& out, Animal& a);

		virtual void save(std::string sf) = 0;
	};

} // adrd

#endif // ANIMAL_H
