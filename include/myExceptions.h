#ifndef MY_EXCEPTIONS_H
#define MY_EXCEPTIONS_H

#include <iostream>
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
			std::cout << "Era esperado como entrada um único caractere (+ ou -), insira um novo valor: ";
			
		}

		char resolve(std::istream& in){
			return getFRHInput(in);
		}
	};

} // adrd

#endif // MY_EXCEPTIONS_H
