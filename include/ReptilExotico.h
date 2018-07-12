#ifndef REPTIL_EXOTICO_H
#define REPTIL_EXOTICO_H

#include "Reptil.h"
#include "Exotico.h"

namespace adrd {

	class ReptilExotico: public Reptil, public Exotico {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		ReptilExotico();

		void save(std::string sf);
	};

} // adrd

#endif // REPTIL_EXOTICO_H

