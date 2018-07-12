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

int main(int argc, char const *argv[]){

	if(argc < 3) {
		showHelp();
		exit(-1);
	}
	
	int cFlag(0), vFlag(0), tFlag(0), opt;

	std::string classe = "";
	std::string tratador = "";
	std::string veterinario = "";
	std::string arquivo = "";

	while((opt = getopt(argc, argv, "c:v:t:")) != -1) {
	    switch(opt){
	    	case 'c':
	    		cFlag = 1;
	    		classe = optarg;
	    		break;
	    	case 'v':
	    		vFlag = 1;
	    		veterinario = optarg;
	    		break;
	    	case 't':
	    		tFlag = 1;
	    		tratador = optarg;
	    }
	}
	if((argv[optind] != NULL)) arquivo = argv[optind];

	
	adrd::Exportar exp;

	exp(classe, tratador, veterinario);


	return 0;
}