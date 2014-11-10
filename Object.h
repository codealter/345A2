#include "List.h"
#include "NVPair.h"
static const int DATA_MEMBERS_PER_OBJECT = 10;
static const char VALUE_DELIMITER = ' ';
class Object {
public:
	// set assigns values to the data members of the derived Object
	virtual void set(List<NVPair<std::string, std::string>, DATA_MEMBERS_PER_OBJECT>()) = 0;

	// getDSV returns the values of the data members delimied by VALUE_DELIMITER 
	virtual const std::string getDSV(char) const = 0;

	// derived objects may contain pointers: virtual destructors are necessary
	virtual ~Object() {}
};