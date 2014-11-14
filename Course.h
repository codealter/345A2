//Cartoon.h
#include "Object.h"
//template<typename C>
class Course : virtual public Object{
	string Name;
	string CPA;
	string BSD;

public:
	void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT> l){
		Name = l[0].value();
		CPA = l[1].value();
		BSD = l[2].value();
	}
	const std::string getDSV(char c = VALUE_DELIMITER) const{
		string value = Name+ c + CPA + c + BSD;
		return value;
	}
	std::ostream& operator<<(std::ostream& os, const Course& cart){
		os << "Name " << Name << '\n' << "CPA " << CPA << '\n' << "BSD " << BSD;
	}
};
