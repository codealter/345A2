//Identity.h
#include <stdio.h>
#include "Object.h"
#include <iostream>
using namespace std;
class Identity : Object{
public:
	void set(){}
	const std::string getDVS() const{
		return "";
	}
};
ostream& operator<<(ostream&, const Identity&){
	cout << "" << endl;
}