#include <iostream>
#include <fstream>
#include "mPetFera.h"

void showHelp(){

}

int main(int argc, char const *argv[]){

	if(argc < 3 || argc%2 == 0) {
		showHelp();
		exit(-1);
	}
	
	int cFlag(0), vFlag(0), tFlag(0);

	std::string classe;
	std::string tratador;
	std::string veterinario;
	std::string arquivo;

	for (auto i = 0; i < argc; i++){
		std::string aux = argv[i];
		if(aux == "-h") {
			showHelp();
			exit(-1);
		}else if(aux == "-c") {
			cFlag = 1;
			if(argv[i+1] != nullptr) {
				classe = argv[++i];
			}else{
				std::cout << "-c espera uma classe de animal como entrada.";
				exit(-1);
			}
		}else if(aux == "-v") {
			cFlag = 1;
			if(argv[i+1] != nullptr) {
				veterinario = argv[++i];
			}else{
				std::cout << "-v espera id do veterinário como entrada.";
				exit(-1);
			}
		}else if(aux == "-t") {
			cFlag = 1;
			if(argv[i+1] != nullptr) {
				tratador = argv[++i];
			}else{
				std::cout << "-t espera id do tratador como entrada.";
				exit(-1);
			}
		}
	}

	arquivo = argv[argc-1];

	adrd::mPetFera petFera;

	petFera.loadAnimais();

	if(cFlag == 1) {
		if(classe == "Mammalia" || classe == "Ave" || classe == "Reptilia" || classe == "Amphibia") {
			for (auto i = petFera.getAnimais().begin(); i != petFera.getAnimais().end(); i++){
				if((*i->second).getClasse() == classe) {
					(*i->second).save(arquivo);
				}
			}
		}else{
			std::cout << "Classe não reconhecida" << std::endl;
			exit(-1);
		}
	}

	if(vFlag == 1) {
		for (auto i = petFera.getAnimais().begin(); i != petFera.getAnimais().end(); i++){
			if((*i->second).getVeterinario() == std::stoi(veterinario)) {
				(*i->second).save(arquivo);
			}else{
				std::cout << "Funcionário não encontrado" << std::endl;
			}
		}
	}

	if(tFlag == 1) {
		for (auto i = petFera.getAnimais().begin(); i != petFera.getAnimais().end(); i++){
			if((*i->second).getTratador() == std::stoi(tratador)) {
				(*i->second).save(arquivo);
			}else{
				std::cout << "Funcionário não encontrado" << std::endl;
			}
		}
	}



	return 0;
}