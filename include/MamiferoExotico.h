#ifndef MAMIFERO_EXOTICO_H
#define MAMIFERO_EXOTICO_H

#include "Mamifero.h"
#include "Exotico.h"

namespace adrd {

	class MamiferoExotico: public Mamifero, public Exotico {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		MamiferoExotico();

		void save(std::string sf);
	};

} // adrd

#endif // MAMIFERO_EXOTICO_H
