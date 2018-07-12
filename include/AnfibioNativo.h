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

		std::ostream& save(std::ostream& out);
	};

} // adrd

#endif // ANFIBIO_NATIVO_H
