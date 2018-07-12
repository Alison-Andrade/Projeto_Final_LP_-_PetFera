#ifndef ANFIBIO_EXOTICO_H
#define ANFIBIO_EXOTICO_H

#include "Anfibio.h"
#include "Exotico.h"

namespace adrd {

	class AnfibioExotico: public Anfibio, public Exotico {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		AnfibioExotico();

		void save(std::string sf);
	};

} // adrd

#endif // ANFIBIO_EXOTICO_H
