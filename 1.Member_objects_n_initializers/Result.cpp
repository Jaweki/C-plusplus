#include "Result.h"
Result::Result() : val(0.0), time(0) { /* ... */ };

Result::Result(double w, const DayTime& z)
	: val(w), time(z) {};

Result::Result(double w, int hr, int min, int sec)
	: val(w), time(hr, min, sec) {};

void Result::print() const
{
	
	std::cout << "Temp: " << getVal() << "  at Time: "; getTime();
	std::cout << std::endl;
}