#include "Animal.h"

namespace adrd {

	unsigned Animal::counterID = 0;

	Animal::Animal(){
		this->counterID++;
	}

	Animal::Animal(int id_, std::string classe_, std::string nome_, std::string cientifico_,
				char sexo_, float tamanho_, std::string dieta_, int veterinario_, 
				int tratador_, std::string batismo_):
	id(id_), classe(classe_), nome(nome_), cientifico(cientifico_), sexo(sexo_), tamanho(tamanho_),
	dieta(dieta_), veterinario(veterinario_), tratador(tratador_), batismo(batismo_){
		this->counterID++;
	}

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

	int 
	Animal::getVeterinario(){
		return this->veterinario;
	}

	int 
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
	Animal::setVeterinario(int veterinario_){
		this->veterinario = veterinario_;
	}

	void 
	Animal::setTratador(int tratador_){
		this->tratador = tratador_;
	}

	void 
	Animal::setBatismo(std::string batismo_){
		this->batismo = batismo_;
	}

	int
	Animal::getCounter(){
		return counterID;
	}

	//Sobrecargas
	std::istream& operator>>(std::istream& in, Animal& a){

		a.id = a.getCounter();
		std::cout << "# Nome: ";
		std::getline(in, a.nome);
		std::cout << "# Nome Cientifico: ";
		std::getline(in, a.cientifico);
		std::cout << "# Sexo: ";
		in >> a.sexo;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Tamanho: ";
		in >> a.tamanho;
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Dieta: ";
		std::getline(in, a.dieta);
		std::cout << "# ID do veterinario responsavel (0 = sem veterinario): ";
		a.veterinario = getInt(in);
		std::cout << "# ID do tratador responsavel (0 = sem tratador): ";
		a.tratador = getInt(in);
		std::cout << "# Nome de Batismo: ";
		std::getline(in, a.batismo);
		

		return a.read(in);
	}
	

	std::ostream& operator<<(std::ostream& out, Animal& a){

		out << "#  >>> Ficha do Animal <<<" << std::endl
			<< "# ID: " << a.id << std::endl
			<< "# Classe: " << a.classe << std::endl
			<< "# Nome: " << a.nome << std::endl
			<< "# Sexo: " << a.sexo << std::endl
			<< "# Nome Cientifico: " << a.cientifico << std::endl
			<< "# Tamanho: " << a.tamanho << " m" << std::endl
			<< "# Dieta: " << a.dieta << std::endl
			<< "# ID do Veterinario: ";
			a.veterinario == 0 ? out << "Sem veterinario responsavel" << std::endl : out << a.veterinario << std::endl;
		out << "# ID do Tratador: ";
			a.tratador == 0 ? out << "Sem tratador responsavel" << std::endl : out << a.tratador << std::endl;
		out << "# Nome de Batismo: " << a.batismo << std::endl;

		return a.print(out);
	}

} // adrd