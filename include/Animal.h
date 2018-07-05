#ifndef ANIMAL_H
#define ANIMAL_H

namespace adrd {

	class Animal {
	protected:
		int id;
		std::string classe;
		std::string nome;
		std::string cientifico;
		char sexo;
		float tamanho;
		std::string dieta_;
		Veterinario veterinario;
		Tratador tratador;
		std::string batismo;
	public:
		Animal();
		Animal(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_);
		~Animal();

		// Getters
		int getID();
		std::string getClasse();
		std::string getNome();
		std::string getCientifico();
		char getSexo();
		float getTamanho();
		std::string getDieta();
		Veterinario getVeterinario();
		Tratador getTratador();
		std::string getBatismo();

		//Setters
		void setID(int id_);
		void setClasse(std::string classe_);
		void setNome(std::string nome_);
		void setCientifico(std::string cientifico_);
		void setSexo(char sexo_);
		void setTamanho(float tamanho_);
		void setDieta(std::string dieta_);
		void setVeterinario(Veterinario veterinario_);
		void setTratador(Tratador tratador_);
		void setBatismo(std::string batismo_);
	};

} // adrd

#endif // ANIMAL_H
