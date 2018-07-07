#include "mPetFera.h"

namespace adrd {

	mPetFera::mPetFera(){
		
	}

	void
	mPetFera::run(){
		this->loadAnimais();
		this->loadFuncionarios();

		for (auto i = mAnimal.begin(); i != mAnimal.end(); i++){
			std::cout << *i->second << std::endl;
		}

		for (auto i = mFuncionario.begin(); i != mFuncionario.end(); i++){
			std::cout << *i->second << std::endl;
		}
	}

	void
	mPetFera::loadAnimais(){
		std::ifstream file;

		std::string id;
		std::string classe;
		std::string nome;
		std::string cientifico;
		std::string sexo;
		std::string tamanho;
		std::string dieta;
		std::string veterinario;
		std::string tratador;
		std::string batismo;

		//Anfibio
		std::string total_mudas;
		std::string ultima_muda;
		//Ave
		std::string tamanho_bico;
		std::string envergadura;
		//Mamifero
		std::string cor_pelo;
		//Réptil
		std::string venenoso;
		std::string tipo_veneno;

		std::string linha;

		std::vector<std::string> linhas;

		try {
			file.open("./data/Animais.csv");

			while(std::getline(file, linha)) {
				linhas.push_back(linha);
			}

			file.close();
		}catch(std::exception& e) {
			
		}

		for (auto i = linhas.begin(); i < linhas.end(); i++){

			std::stringstream ss(*i);

			std::getline(ss, id, ';');
			std::getline(ss, classe, ';');
			std::getline(ss, nome, ';');
			std::getline(ss, cientifico, ';');
			std::getline(ss, sexo, ';');
			std::getline(ss, tamanho, ';');
			std::getline(ss, dieta, ';');
			std::getline(ss, veterinario, ';');
			std::getline(ss, tratador, ';');
			std::getline(ss, batismo, ';');


			if(classe == "Amphibia") {
				std::getline(ss, total_mudas, ';');
				std::getline(ss, ultima_muda);

				std::shared_ptr<Animal> an(new Anfibio(std::stoi(id), classe, nome, cientifico, 
												sexo[0], std::stof(tamanho), dieta, std::stoi(veterinario),
												std::stoi(tratador), batismo, std::stoi(total_mudas), ultima_muda));

				mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(stoi(id), an));
			}else if(classe == "Reptilia") {
				std::getline(ss, venenoso, ';');
				std::getline(ss, tipo_veneno, ';');
				bool aux;

				venenoso = "true" ? (aux = true) : (aux = false);

				std::shared_ptr<Animal> an(new Reptil(std::stoi(id), classe, nome, cientifico, 
												sexo[0], std::stof(tamanho), dieta, std::stoi(veterinario),
												std::stoi(tratador), batismo, aux, tipo_veneno));

				mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(stoi(id), an));
			}else if(classe == "Ave") {
				std::getline(ss, tamanho_bico, ';');
				std::getline(ss, envergadura);

				std::shared_ptr<Animal> an(new Ave(std::stoi(id), classe, nome, cientifico, 
												sexo[0], std::stof(tamanho), dieta, std::stoi(veterinario),
												std::stoi(tratador), batismo, stoi(tamanho_bico), stoi(envergadura)));

				mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(stoi(id), an));
			}else if(classe == "Mammalia") {
				std::getline(ss, cor_pelo);

				std::shared_ptr<Animal> an(new Mamifero(std::stoi(id), classe, nome, cientifico, 
												sexo[0], std::stof(tamanho), dieta, std::stoi(veterinario),
												std::stoi(tratador), batismo, cor_pelo));

				mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(stoi(id), an));
			}
		}
	}

	void
	mPetFera::loadFuncionarios(){
		std::ifstream file;

		std::string id;
		std::string nome;
		std::string cpf;
		std::string idade;
		std::string tipo_sanguineo;
		std::string fatorRH;
		std::string especialidade;
		std::string funcao;
		
		std::string linha;

		std::vector<std::string> linhas;

		try {
			file.open("./data/Funcionarios.csv");

			while(std::getline(file, linha)) {
				linhas.push_back(linha);
			}

			file.close();
		}catch(std::exception& e) {
			
		}

		for (auto i = linhas.begin(); i < linhas.end(); i++){

			std::stringstream ss(*i);

			std::getline(ss, id, ';');
			std::getline(ss, nome, ';');
			std::getline(ss, cpf, ';');
			std::getline(ss, idade, ';');
			std::getline(ss, tipo_sanguineo, ';');
			std::getline(ss, fatorRH, ';');
			std::getline(ss, especialidade, ';');
			std::getline(ss, funcao);


			if(funcao == "Tratador") {
				std::shared_ptr<Funcionario> f(new Tratador(std::stoi(id), nome, cpf, std::stoi(idade), 
												tipo_sanguineo, fatorRH[0], especialidade));

				mFuncionario.insert(std::pair<int, std::shared_ptr<Funcionario>>(stoi(id), f));
			}else if(funcao == "Veterinário") {
				std::shared_ptr<Funcionario> f(new Veterinario(std::stoi(id), nome, cpf, std::stoi(idade), 
												tipo_sanguineo, fatorRH[0], especialidade));

				mFuncionario.insert(std::pair<int, std::shared_ptr<Funcionario>>(stoi(id), f));
			}
		}
	}

} // adrd

// void run(){



// }

// void menu(){

// 	int op = -1;

// 	std::cout << "# Bem vindo ao PetFera" << std::endl << std::endl;

// 	std::cout << "# Selecione a opção desejada inserindo o número correspondente" << std::endl << std::endl;

// 	std::cout << "(1) Listar animais cadastrados" << std::endl
// 				<< "(2) Cadastrar novo animal" << std::endl
// 				<< "(3) Buscar animal específico" << std::endl
// 				<< "(4) Listar funcionários" << std::endl
// 				<< "(5) Cadastrar novo funcionário" << std::endl
// 				<< "(6) Buscar funcionário específico" << std::endl
// 				<< "(0) Sair" << std::endl << std::endl
// 				<< "Opção: ";

// 	while(op < 0 || op > 6) {
// 	    op = getInt(std::cin);
// 	}

// 	switch(op){
// 		case 0:
// 			exit(0);
// 			break;
// 		case 1:
// 			break;
// 		case 2:
// 			break;
// 		case 3:
// 			break;
// 		case 4:
// 			break;
// 		case 5:
// 			break;
// 		case 6:
// 			break;
// 	}

// }