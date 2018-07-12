#ifndef MAMIFERO_NATIVO_H
#define MAMIFERO_NATIVO_H

#include "Mamifero.h"
#include "Nativo.h"

namespace adrd {

	class MamiferoNativo: public Mamifero, public Nativo {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		MamiferoNativo();

		void save(std::string sf);
	};

} // adrd

#endif // MAMIFERO_NATIVO_H
