#ifndef MY_EXCEPTIONS_H
#define MY_EXCEPTIONS_H

namespace adrd {

	class NotIntException {
	public:
		NotIntException(){
			std::cout << "";
			GetInt();
		};
	};

} // adrd

#endif // MY_EXCEPTIONS_H
