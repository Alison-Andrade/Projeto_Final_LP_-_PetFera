#ifndef REPTIL_NATIVO_H
#define REPTIL_NATIVO_H

#include "Reptil.h"
#include "Nativo.h"

namespace adrd {

	class ReptilNativo: public Reptil, public Nativo {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		ReptilNativo();

		std::ostream& save(std::ostream& out);
	};

} // adrd

#endif // REPTIL_EXOTICO_H

