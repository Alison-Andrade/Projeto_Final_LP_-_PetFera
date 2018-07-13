#include "Exportar.h"

namespace adrd {

	Exportar::Exportar()
	{}

	void
	Exportar::operator()(std::string classe, std::string tratador, std::string veterinario){
		int c(0), v(0), t(0);
		if (classe != "") c = 1;
		if (tratador != "") t = 1;
		if (veterinario != "") v = 1;

		if(c == 1 && t == 0 && v == 0) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getClasse() == classe) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 0 && t == 1 && v == 0) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getTratador() == std::stoi(tratador)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 0 && t == 0 && v == 1) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getVeterinario() == std::stoi(veterinario)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 1 && t == 1 && v == 0) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getClasse() == classe && i->second->getTratador() == std::stoi(tratador)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 1 && t == 0 && v == 1) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getClasse() == classe && i->second->getVeterinario() == std::stoi(veterinario)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 0 && t == 1 && v == 1) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getVeterinario() == std::stoi(veterinario) && i->second->getTratador() == std::stoi(tratador)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}else if(c == 1 && t == 1 && v == 1) {
			for(auto i = this->mAnimal.begin(); i != this->mAnimal.end(); i++) {
				if(i->second->getClasse() == classe && i->second->getTratador() == std::stoi(tratador) && i->second->getVeterinario() == std::stoi(veterinario)) {
					expotMap.insert(std::pair<int, std::shared_ptr<Animal>>(i->second->getID(), i->second));
				}
			}
		}
	}

	std::ostream& operator<<(std::ostream& out, Exportar& exp){

		for (auto i = exp.getAnimais().begin(); i != exp.getAnimais().end(); i++){
			i->second->save(out);
		}

		return out;
	}

} // adrd