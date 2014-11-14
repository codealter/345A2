//NVPair.h


template<typename A, typename B>
class NVPair{
	A a;
	B b;
public:
	NVPair(){}
	NVPair(const A& aa, const B& bb)// - constructor initializes the object to the referenced values
	{
		a = aa;
		b = bb;
	}
	const A& name() const// - returns an unmodifiable reference to the first object of the pair
	{
		return a;
	}
	const B& value() const// - returns an unmodifiable reference to the second object of the pair
	{
		return b;
	}
	int width() const// - returns the field width of A - defaults to 0
	{
		int len = a.length();
		return len;
	}
};

////template<>
//int NVPair<std::string, std::string>::width() const {
//	return a.length();
//}
//template<>
//int NVPair<std::string, double>::width() const{
//	return a.length();
//}