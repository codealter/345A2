//Cartoon.h
#include "Object.h"
#include "List.h"
#include "NVPair.h"
template<typename C>
class Course : Object{
	List list;

public:
	void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT> l){
		list = l;
	}
	const std::string getDSV(char c = VALUE_DELIMITER) const{
		string value = "";
		for (int i = 0; i < list->size(); i++){

			if (i % 3 != 0){ value += list[i].value() + ' ' + c + ' '; } // since NVPair has a name and value I'm just assuming first would be called type second would be called cat for example
			else { value += '\n' + list[i].value() + ' ' + c + ' '; } //if it divisible by 3 then add a newline
		}
		return value;
		/*Expected Output:

		cat | Tom | mice
		mouse | Jerry | cheese		*/
	}
	std::ostream& operator<<(std::ostream& os, const Cartoon& cart){
		//displays each value prefixed by the name that identifies that value.  This function displays each name-value pair on a separate line
		for (int i = 0; i < cart.list.size(); i++){
			os << list[i].name() << ' ' << list[i].value() << '\n';
		}
	}
};
//template<typename C>
//displays each value prefixed by the name that identifies that value.  This function displays each name-value pair on a separate line
//std::ostream& operator<<(std::ostream& os, const Cartoon& cart){
//	
//	for (int i = 0; i < cart.list.size(); i++){
//		os <<
//	}
//}
/*
Expected Output:

type cat
name Tom
likes mice

type mouse
name Jerry
likes cheese



*/