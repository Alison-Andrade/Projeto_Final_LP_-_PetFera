#include "Exotico.h"

namespace adrd {

	Exotico::Exotico()
	{}

	std::string 
	Exotico::getPais(){
		return this->pais_origem;
	}

	void 
	Exotico::setPais(std::string pais_){
		this->pais_origem = pais_;
	}

} // adrd