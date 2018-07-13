#include <iostream>
#include <fstream>
#include <unistd.h>
#include "Exportar.h"

void showHelp(){
	std::cout << "Help:" << std::endl
				<< "	-c : Recebe classe de animal" << std::endl
				<< "	-v : Recebe id do veterinario" << std::endl
				<< "	-c : Recebe id do tratador" << std::endl
				<< "	Obrigatoriamente deve-se passar o nome de um arquivo de saida" << std::endl;
}

int main(int argc, char *argv[]){

	if(argc < 3) {
		showHelp();
		exit(-1);
	}

	int opt;

	std::string classe = "";
	std::string tratador = "";
	std::string veterinario = "";
	std::string arquivo = "";

	while((opt = getopt(argc, argv, "c:v:t:")) > 0) {
	    switch(opt){
	    	case 'c':
	    		classe = optarg;
	    		break;
	    	case 'v':
	    		veterinario = optarg;
	    		break;
	    	case 't':
	    		tratador = optarg;
	    		break;
	    }
	}
	if((argv[optind] != NULL)) arquivo = argv[optind];

	
	adrd::Exportar exp;

	exp(classe, tratador, veterinario);

	std::ofstream p(arquivo);

	p << exp;

	p.close();


	return 0;
}