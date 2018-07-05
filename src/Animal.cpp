#include "Animal.h"

namespace adrd {

	Animal::Animal()
	{}

	Animal::Animal(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, Veterinario veterinario_, 
				Tratador tratador_, std::string batismo_):
	id(id_), classe(classe_), nome(nome_), cientifico(cientifico_), sexo(sexo_), tamanho(tamanho_),
	dieta(dieta_), veterinario(veterinario_), tratador(tratador_), batismo(batismo_)
	{}

	Animal::~Animal()
	{}

	// Getters
	int 
	Animal::getID(){
		return this->id;
	}

	std::string 
	Animal::getClasse(){
		return this->classe;
	}

	std::string 
	Animal::getNome(){
		return this->nome;
	}

	std::string 
	Animal::getCientifico(){
		return this->cientifico;
	}

	char 
	Animal::getSexo(){
		return this->sexo;
	}

	float 
	Animal::getTamanho(){
		return this->tamanho;
	}

	std::string 
	Animal::getDieta(){
		return this->dieta;
	}

	Veterinario 
	Animal::getVeterinario(){
		return this->veterinario;
	}

	Tratador 
	Animal::getTratador(){
		return this->tratador;
	}

	std::string 
	Animal::getBatismo(){
		return this->batismo;
	}

	//Setters
	void 
	Animal::setID(int id_){
		this->id = id_;
	}

	void 
	Animal::setClasse(std::string classe_){
		this->classe = classe_;
	}

	void 
	Animal::setNome(std::string nome_){
		this->nome = nome_;
	}

	void 
	Animal::setCientifico(std::string cientifico_){
		this->cientifico = cientifico_;
	}

	void 
	Animal::setSexo(char sexo_){
		this->sexo = sexo_;
	}

	void 
	Animal::setTamanho(float tamanho_){
		this->tamanho = tamanho_;
	}

	void 
	Animal::setDieta(std::string dieta_){
		this->dieta = dieta_;
	}

	void 
	Animal::setVeterinario(Veterinario veterinario_){
		this->veterinario = veterinario_;
	}

	void 
	Animal::setTratador(Tratador tratador_){
		this->tratador = tratador_;
	}

	void 
	Animal::setBatismo(std::string batismo_){
		this->batismo = batismo_;
	}

} // adrd