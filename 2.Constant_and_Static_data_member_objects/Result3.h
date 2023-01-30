#pragma once
// result3.h
// The class Result with static data members.
// ---------------------------------------------------
#ifndef _RESULT_
#define _RESULT_
#include "DayTime.h" // Class DayTime
const DayTime& currentTime();

class Result
{
private:
	double val;
	const DayTime time;

	// Declaration of static members:
	static double min, max; // Minimum, maximum
	static bool first;// true, if it is the first value.
	static void setMinMax(double w); // private function; it initializies the min and max 
			
public:
	Result(double w, const DayTime& z = currentTime());
	Result(double w, int hr, int min, int sec);
	
	//get functions
	static double getMin() { return min; }
	static double getMax() { return max; }
	// ... The other member functions as before
	double getVal() const { return val; }
	const void getTime() const { DayTime z = time; return z.print(); }

	//set functions.
	//void setTime(const DayTime& z ) { time = z }  // Invalid since time is const.
	void setVal(double w) { val = w; }
	bool setMin() { bool first = true; return first;};
	bool setMax() { bool first = true; return first;};
	void setMinMax(float f)
	{
		if (setMin())
		{

			 { min = f; };
			 bool first = false;

		}
	    if (setMin())
		{
			 { max = f; };
			 bool first = false;

		}
	}
	
	void print() const;
};
#endif // _RESULT_
