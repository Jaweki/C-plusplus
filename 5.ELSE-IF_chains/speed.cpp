//speed.cpp
//Output the fine for driving too fast.

#include <iostream>
using namespace std;

int main()
{
	float limit, speed, toofast;
	std::cout << "\nSpeed limit: ";
	std::cin >> limit;
	std::cout << "\nSpeed: ";
	std::cin >> speed;

	if ((toofast = speed - limit) < 1)
		std::cout << "You were lucky. Drive safe!" << endl;
	else if (toofast < 10)
		std::cout << "Watch your cruise speed!" << std::endl;
	else if (toofast < 20)
		std::cout << "SPEED LIMIT EXCEEDED!!\n"
		<< "Fine payable: $40 " << std::endl;
	else if (toofast < 30)
		std::cout << "SPEED LIMIT EXCEEDED!!\n"
		<< "Fine payable: $80 " << std::endl;
	else
		std::cout << "SPEED LIMIT CRITICALLY EXCEEDED!!"
		<< "Hand over your driver's license!!" << std::endl;

	return 0;
}