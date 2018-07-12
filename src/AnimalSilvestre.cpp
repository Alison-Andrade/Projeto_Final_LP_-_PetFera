#include "AnimalSilvestre.h"

namespace adrd {

	AnimalSilvestre::AnimalSilvestre()
	{}

	void
	AnimalSilvestre::setIbama(std::string ibama_){
		this->ibama = ibama_;
	}

	std::string 
	AnimalSilvestre::getIbama(){
		return this->ibama;
	}

} // adrd