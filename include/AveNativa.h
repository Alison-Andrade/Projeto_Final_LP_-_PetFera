#ifndef AVE_NATIVA_H
#define AVE_NATIVA_H

#include "Ave.h"
#include "Nativo.h"

namespace adrd {

	class AveNativa: public Ave, public Nativo {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		AveNativa();

		std::ostream& save(std::ostream& out);
	};

} // adrd

#endif // AVE_NATIVA_H
