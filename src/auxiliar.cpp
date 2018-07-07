#include "auxiliar.h"
#include "myExceptions.h"
#include <sstream>
#include <limits>

namespace adrd {

	int getInt(std::istream& in){

		int x;

		try{
			std::string s;
		    std::getline(in, s);

		    std::stringstream ss(s);

		    if(!(ss >> x)) {
		    	throw NotIntException();
		    }

		    char aux;

		    if(ss >> aux) {
		    	throw NotIntException();
		    }
		}catch(NotIntException& e){
			x = e.resolve(in);
		}

		return x;
	}

	char getFRHInput(std::istream& in){

		char x;

		try{
			in >> x;

			if(sizeof(x) > sizeof(char)) {
				in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				throw NotFRHException();
			}

			if(x != '+' && x != '-') {
				throw NotFRHException();
			}

		}catch(NotFRHException& e){
			x = e.resolve(in);
		}

		return x;
	}

} // adrd