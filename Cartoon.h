//Cartoon.h
#include "List.h"
template<typename C>
class Cartoon : Object{
	C type;
	C name;
	C likes;
public:
	void set(List, C){

	}
	virtual const std::string getDSV(char c = VALUE_DELIMITER) const{

	}
};
template<typename C>
std::ostream& operator<<(std::ostream&, const Cartoon&){

}