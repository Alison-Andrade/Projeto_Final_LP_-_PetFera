#ifndef REPTIL_EXOTICO_H
#define REPTIL_EXOTICO_H

#include "Reptil.h"
#include "Nativo.h"

namespace adrd {

	class ReptilNativo: public Reptil, public Nativo {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		ReptilNativo();

		void save(std::string sf);
	};

} // adrd

#endif // REPTIL_EXOTICO_H

