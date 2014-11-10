//NVPair.h


template<typename A, typename B>
class NVPair{
	A Name;
	B Value;
public:
	NVPair(){

	}
	NVPair(A name, B value){
		Name = name;
		Value = value;
	}
	A name() const{
		return Name;
	}
	B value() const{
		return Value;
	}
};