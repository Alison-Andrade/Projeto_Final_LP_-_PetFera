#include "mPetFera.h"

namespace adrd {

	mPetFera::mPetFera(){
		
	}

	mPetFera::~mPetFera(){
		mAnimal.clear();
		mFuncionario.clear();
	}

	void
	mPetFera::run(){
		this->loadFuncionarios();
		this->loadAnimais();
		this->menu();
		
	}

	void
	mPetFera::menu(){

		int op = -1;

		std::cout << "# Bem vindo ao PetFera" << std::endl << std::endl;

		std::cout << "# Selecione a opção desejada inserindo o número correspondente" << std::endl << std::endl;

		std::cout << "(1) Listar animais cadastrados" << std::endl
					<< "(2) Cadastrar novo animal" << std::endl
					<< "(3) Remover animal" << std::endl
					<< "(4) Listar funcionários" << std::endl
					<< "(5) Cadastrar novo funcionário" << std::endl
					<< "(6) Remover funcionário" << std::endl
					<< "(0) Sair" << std::endl << std::endl
					<< "Opção: ";

		while(op < 0 || op > 6) {
		    op = getInt(std::cin);
		}

		switch(op){
			case 0:
				exit(0);
				break;
			case 1:
				this->listarAnimais();
				this->menu();
				break;
			case 2:
				this->cadastrarAnimal();
				this->menu();
				break;
			case 3:
				//this->removerAnimal();
				this->menu();
				break;
			case 4:
				this->listarFunionarios();
				this->menu();
				break;
			case 5:
				this->cadastrarFuncionario();
				this->menu();
				break;
			case 6:
				//this->removerFuncionario();
				this->menu();
				break;
		}
	}

	void
	mPetFera::loadAnimais(){
		// std::ifstream file;

		// std::string id;
		// std::string classe;
		// std::string nome;
		// std::string cientifico;
		// std::string sexo;
		// std::string tamanho;
		// std::string dieta;
		// std::string vet_id;
		// std::string trat_id;
		// std::string batismo;

		// Veterinario *vet;
		// Tratador *trat;

		// //Anfibio
		// std::string total_mudas;
		// std::string ultima_muda;
		// //Ave
		// std::string tamanho_bico;
		// std::string envergadura;
		// //Mamifero
		// std::string cor_pelo;
		// //Réptil
		// std::string venenoso;
		// std::string tipo_veneno;

		// std::string idSilvestre;
		// std::string uf;
		// std::string autorizacao;
		// std::string pais;

		// std::string linha;

		// std::vector<std::string> linhas;

		// try {
		// 	file.open("./data/Animais.csv");

		// 	if(!file) throw FileNotFound(file);

		// 	while(std::getline(file, linha)) {
		// 		linhas.push_back(linha);
		// 	}

		// 	file.close();
		// }catch(FileNotFound& e) {
			
		// }

		// for (auto i = linhas.begin(); i < linhas.end(); i++){

		// 	std::stringstream ss(*i);

		// 	std::getline(ss, id, ';');
		// 	std::getline(ss, classe, ';');
		// 	std::getline(ss, nome, ';');
		// 	std::getline(ss, cientifico, ';');
		// 	std::getline(ss, sexo, ';');
		// 	std::getline(ss, tamanho, ';');
		// 	std::getline(ss, dieta, ';');
		// 	std::getline(ss, vet_id, ';');
		// 	std::getline(ss, trat_id, ';');
		// 	std::getline(ss, batismo, ';');	

		// 	for(auto i = mFuncionario.begin(); i != mFuncionario.begin(); i++) {
		// 		if(vet_id == i->second->getID()) {
		// 			vet = *i->second;
		// 		}else if(trat_id == i->second->getID()) {
		// 			trat = *i->second;
		// 		}
		// 	}

		// 	if(classe == "Amphibia") {
		// 		Anfibio Anf;
		// 		std::getline(ss, total_mudas, ';');
		// 		std::getline(ss, ultima_muda);
			
		// 	}else if(classe == "Reptilia") {
		// 		std::getline(ss, venenoso, ';');
		// 		std::getline(ss, tipo_veneno, ';');
		// 		bool aux;

		// 		venenoso = "true" ? (aux = true) : (aux = false);
			
		// 	}else if(classe == "Ave") {
		// 		std::getline(ss, tamanho_bico, ';');
		// 		std::getline(ss, envergadura, ';');

		// 	}else if(classe == "Mammalia") {
		// 		std::getline(ss, cor_pelo, ';');
		// 	}

		// 	if(idSilvestre == "SN") {
		// 		std::getline(ss, uf, ';');
		// 		std::getline(ss, autorizacao);
		// 	}else if(idSilvestre == "SE") {
		// 		std::getline(ss)
		// 	}
		// }
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

			if(!file) throw FileNotFound(file);

			while(std::getline(file, linha)) {
				linhas.push_back(linha);
			}

			file.close();
		}catch(FileNotFound& e) {
			
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

				mFuncionario.insert(std::pair<int, std::shared_ptr<Funcionario>>(stoi(id), 
					std::make_shared<Tratador>(Tratador(std::stoi(id), nome, cpf, std::stoi(idade), 
												tipo_sanguineo, fatorRH[0], especialidade))));
			}else if(funcao == "Veterinário") {

				mFuncionario.insert(std::pair<int, std::shared_ptr<Funcionario>>(stoi(id),
					std::make_shared<Veterinario>(Veterinario(std::stoi(id), nome, cpf, std::stoi(idade), 
												tipo_sanguineo, fatorRH[0], especialidade))));
			}
		}
	}

	bool
	mPetFera::cadastrarAnimal(){
		std::cout << "# Cadastro de Animal" << std::endl << std::endl;
		std::cout << "# Informe os dados do animal" << std::endl << std::endl;

		int silvestre = 0;

		std::cout << "Digite '1' para animal Nativo e '2' para animal Exotico: ";
		
		while(silvestre < 1 || silvestre > 2) {
		    silvestre = getInt(std::cin);
		}

		std::cout << "# Classe: ";
		std::string classe;
		
		while(classe != "Mammalia" && classe != "Reptilia" && classe != "Ave" && classe != "Amphibia") {

			std::getline(std::cin, classe);

		    if(classe == "Mammalia") {
				if(silvestre == 1) {
					MamiferoNativo mamifero;

					std::cin >> mamifero;
					mamifero.setClasse(classe);

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(mamifero.getID(), std::make_shared<MamiferoNativo>(mamifero)));
				}else if(silvestre == 2) {
					MamiferoExotico mamifero;

					std::cin >> mamifero;
					mamifero.setClasse(classe);

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(mamifero.getID(), std::make_shared<MamiferoExotico>(mamifero)));
				}

				return true;
			}else if(classe == "Reptilia") {
				if(silvestre == 1) {
					ReptilNativo reptil;

					std::cin >> reptil;
					reptil.setClasse(classe);

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(reptil.getID(), std::make_shared<ReptilNativo>(reptil)));
				}else if(silvestre == 2) {
					// ReptilExotico reptil;

					// std::cin >> reptil;
					// reptil.setClasse(classe);

					// mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(reptil.getID(), std::make_shared<ReptilExotico>(reptil)));
				}

				return true;
			}else if(classe == "Ave") {
				if(silvestre == 1) {
					AveNativa ave;

					std::cin >> ave;

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(ave.getID(), std::make_shared<AveNativa>(ave)));
				}else if(silvestre == 2) {
					AveExotica ave;

					std::cin >> ave;

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(ave.getID(), std::make_shared<AveExotica>(ave)));
				}

				return true;
			}else if(classe == "Amphibia") {
				if(silvestre == 1) {
					AnfibioNativo anfibio;

					std::cin >> anfibio;

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(anfibio.getID(), std::make_shared<AnfibioNativo>(anfibio)));
				}else if(silvestre == 2) {
					AnfibioExotico anfibio;

					std::cin >> anfibio;

					mAnimal.insert(std::pair<int, std::shared_ptr<Animal>>(anfibio.getID(), std::make_shared<AnfibioExotico>(anfibio)));
				}

				return true;
			}else {
				std::cout << "Classe desconhecida, insira uma nova entrada: ";
			}
		}

		return false;
	}

	void 
	mPetFera::listarAnimais(){
		for (auto i = mAnimal.begin(); i != mAnimal.end(); i++){
			std::cout << *i->second << std::endl << std::endl;
		}

		int op = -1;

		while(op < 0 || op > 1) {
		    std::cout << "# (0) Sair e (1) Voltar ao menu: ";
		    op = getInt(std::cin);

		    if(op == 0) exit(0);
		}
	}

	bool
	mPetFera::cadastrarFuncionario(){
		std::cout << "# Cadastro de Funcionario" << std::endl << std::endl;
		std::cout << "# Informe os dados do funcionário" << std::endl << std::endl;

		std::cout << "# Função: ";
		std::string funcao;	
		
		while(funcao != "veterinario" && funcao != "veterinário" && funcao != "tratador") {

			std::getline(std::cin, funcao);
			std::transform(funcao.begin(), funcao.end(),funcao.begin(), ::tolower);

		    if(funcao == "veterinario" || funcao == "veterinário") {
				std::shared_ptr<Funcionario> vet(new Veterinario);

				std::cin >> *vet;

				vet->save("./data/Funcionarios.csv");

				return true;
			}else if(funcao == "reptil" || funcao == "réptil") {
				std::shared_ptr<Funcionario> trat(new Tratador);

				std::cin >> *trat;

				trat->save("./data/Funcionarios.csv");

				return true;
			}else {
				std::cout << "Função desconhecida, insira uma nova entrada: ";
			}
		}

		return false;
	}

	void 
	mPetFera::listarFunionarios(){
		for (auto i = mFuncionario.begin(); i != mFuncionario.end(); i++){
			std::cout << *i->second << std::endl << std::endl;
		}

		int op = -1;

		while(op < 0 || op > 1) {
		    std::cout << "# (0) Sair e (1) Voltar ao menu: ";
		    op = getInt(std::cin);

		    if(op == 0) exit(0);
		}
	}

	std::map<int, std::shared_ptr<Funcionario>>& 
	mPetFera::getFuncionarios(){
		return this->mFuncionario;
	}

	std::map<int, std::shared_ptr<Animal>>&
	mPetFera::getAnimais(){
		return this->mAnimal;
	}

	// std::ostream& operator<<(std::ostream& out, mPetFera& main){
	// 	for(auto i = main.getAnimais().begin(); i < main.getAnimais().end(); i++) {
	// 		*i->second.save(out);
	// 	}
	// }

} // adrd
