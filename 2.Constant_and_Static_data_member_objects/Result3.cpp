#include "Result3.h"
Result::Result(double w, const DayTime& z)
	:	val(w), time(z){}

Result::Result(double w, int hr, int min, int sec)
	: val(w), time(hr, min, sec) {}

void Result::print() const 
{
	std::cout << "Temp: " << getVal() << " at Time: "; getTime();
	std::cout << std::endl;
}
