#include "List.h"
class Object {
public:
	// set assigns values to the data members of the derived Object
	virtual void set() = 0;

	// getDSV returns the values of the data members delimied by VALUE_DELIMITER 
	virtual const std::string getDSV() const = 0;

	// derived objects may contain pointers: virtual destructors are necessary
	virtual ~Object() {}
};