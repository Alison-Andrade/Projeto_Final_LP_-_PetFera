#include "Nativo.h"

namespace adrd {

	Nativo::Nativo()
	{}

	//getters
	std::string 
	Nativo::getUF(){
		return this->uf_origem;
	}
	
	std::string 
	Nativo::getAutorizacao(){
		return this->autorizacao;
	}

	//setters	
	void 
	Nativo::setUF(std::string uf_){
		this->uf_origem = uf_;
	}
	
	void 
	Nativo::setAutorizacao(std::string autorizacao_){
		this->autorizacao = autorizacao_;
	}

} // adrd