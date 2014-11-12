//Cartoon.h
#include "List.h"
template<typename C>
class Cartoon : public Object{
	/*C type;
	C name;
	C likes;*/
	auto list;

public:
	void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT> l){
		 
	}
	const std::string getDSV(char c = VALUE_DELIMITER) const{

	}
};
template<typename C>
std::ostream& operator<<(std::ostream&, const Cartoon&){

}