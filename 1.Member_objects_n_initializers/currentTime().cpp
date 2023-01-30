#include "DayTime.h"//user defined header file
 // Functions _time64(), _localtime64_s().

using namespace std;

const DayTime& currentTime() // Returns the
{                            // present time.

	__time64_t rawTime; _time64(&rawTime); // Gets the present time from systems' OS.

	static DayTime curTime;

	// tm with presentTime.
	struct tm presentTime;
	_localtime64_s(&presentTime, &rawTime); // Initializes the presentTime with rawTime

	curTime.setTime(presentTime.tm_hour, presentTime.tm_min, presentTime.tm_sec);

	return curTime;
}