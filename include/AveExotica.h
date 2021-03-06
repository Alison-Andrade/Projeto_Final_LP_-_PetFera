#ifndef AVE_EXOTICA_H
#define AVE_EXOTICA_H

#include "Ave.h"
#include "Exotico.h"

namespace adrd {

	class AveExotica: public Ave, public Exotico {
	protected:
		std::istream& read(std::istream& in);
		std::ostream& print(std::ostream& out);
	public:
		AveExotica();

		std::ostream& save(std::ostream& out);
	};

} // adrd

#endif // AVE_EXOTICA_H
