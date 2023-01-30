//ascii.cpp: To output an ASCII code Table
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ac = 0;
	
	while (true)
	{
		std::cout << "\nCharacter Decimal Hexadecimal\n\n";
		int upper;

		for (upper = ac + 20; ac < upper && ac < 256; ++ac)
			std::cout << "  " << (char)ac
			<< setw(10) << dec << ac
			<< setw(10) << hex << ac << std::endl;
		if (upper >= 256) break;
		std::cout << "\nGo on -->  <return>, stop -->  <q>+<return>";
		char answer;
		cin.get(answer);
		if (answer == 'q' || answer == 'Q') break;
		cin.sync();
	}

	return 0;
}