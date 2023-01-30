#pragma once
// DayTime.h
// The class DayTime represents the time in
// hours, minutes and seconds.
// ---------------------------------------------------
#ifndef _DAYTIME_
#define _DAYTIME_
#include <iostream>

class DayTime
{
private:
	short hour, minute, second;
	bool overflow;
public:
	DayTime(int h = 0, int m = 0, int s = 0)
	{
		overflow = false;
		if (!setTime(h, m, s)) // this->setTime(...)
			hour = minute = second = 0; // hour is equivalent to this->hour etc.
	}
	bool setTime(int hour, int minute, int second = 0)
	{
		if (hour >= 0 && hour < 24
			&& minute >= 0 && minute < 60
			&& second >= 0 && second < 60)
		{
			this->hour = (short)hour;
			this->minute = (short)minute;
			this->second = (short)second;
			return true;
		}
		else
			return false;
	}
	int getHour() const { return hour; }
	int getMinute() const { return minute; }
	int getSecond() const { return second; }

	int asSeconds() const // daytime in seconds
	{
		return (60 * 60 * hour + 60 * minute + second);
	}

	bool isLess(DayTime t) const // compare *this and t
	{
		return asSeconds() < t.asSeconds();
	}          // this->asSeconds() < t.asSeconds();

	void swap(DayTime& t) // One parameter!
	{ // To swap *this and t:
		DayTime temp(t); t = *this; *this = temp;
	}

	void print()
	{
		std::cout << getHour() << ':' << getMinute() << ':' << getSecond();
	}
};
#endif // _DAYTIME_

