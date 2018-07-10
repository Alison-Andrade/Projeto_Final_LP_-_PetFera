/**
* @file		myExceptions.h
* @brief	
* @details	
*
* @author	Alison Sidnei Ferreira de Andrade
*/

#ifndef MY_EXCEPTIONS_H
#define MY_EXCEPTIONS_H

#include <iostream>
#include <fstream>
#include <limits>
#include "auxiliar.h"

namespace adrd {

	class NotIntException{
	public:
		NotIntException(){
			std::cout << "Era esperado como entrada um número inteiro, insira um novo valor: ";
			
		}

		int resolve(std::istream& in){
			return getInt(in);
		}
	};

	class NotFRHException{
	public:
		NotFRHException(){
			std::cout << "Era esperado como entrada '+' ou '-', insira um novo valor: ";
		};

		char resolve(std::istream& in){
			return getFRHInput(in);
		}
		
	};

	class FileNotFound {
	public:
		FileNotFound(std::ifstream& file){
			std::cerr << "Erro ao abrir arquivo." << std::endl;
			std::cout << "Inserir novo caminho? (s/n): ";
			char aux;
			while(aux != 's' && aux != 'n') {
			    std::cin >> aux;
			    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if(aux == 's') {
				std::cout << "Cominho: ";
				std::string path;
				std::getline(std::cin, path);

				file.open(path);
			}else{
				exit(-1);
			}
		}
	};

} // adrd

#endif // MY_EXCEPTIONS_H
