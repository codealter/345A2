//Cartoon.h
#include "Object.h"
#include <sstream>

using namespace std;

class Cartoon : virtual public Object{
	string type;
	string name;
	string likes;

public:
	Cartoon() : type(""), name(""), likes(""){};

	void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT> l){
		type	= l[0].value();
		name	= l[1].value();
		likes	= l[2].value();
	}
	const std::string getDSV(char c = VALUE_DELIMITER) const{
		string value = type + c + name + c + likes;
		return value;
	}
};
std::ostream& operator<<(std::ostream& os, const Cartoon& cart){
	string s = cart.getDSV();
	stringstream stream(s);
	string value;
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		getline(stream, value, VALUE_DELIMITER);

		if (i == 0)
		{
			os << "type " << value << '\n';
		}
		if (i == 1)
		{
			os << "name " << value << '\n';
		}
		if (i == 2)
		{
			os << "likes " << value << '\n';
		}
	}
	
}