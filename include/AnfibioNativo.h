#ifndef ANFIBIO_EXOTICO_H
#define ANFIBIO_NATIVO_H

#include "Anfibio.h"
#include "Nativo.h"

namespace adrd {

	class AnfibioNativo: public Anfibio, public Nativo {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		AnfibioNativo();

		void save(std::string sf);
	};

} // adrd

#endif // ANFIBIO_NATIVO_H
