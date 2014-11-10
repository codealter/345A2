//Identity.h
#include <stdio.h>
#include "Object.h"
#include <iostream>
#include <string>
#include "JSONReader.h"
using namespace std;
class Identity : public Object{
public:
	void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT> l){}
	
	const std::string getDVS(char c = VALUE_DELIMITER ) const
	{
		return std::string();
	}
	~Identity()
	{

	}
};
ostream& operator<<(ostream& os, const Identity& i){
	return os;
}