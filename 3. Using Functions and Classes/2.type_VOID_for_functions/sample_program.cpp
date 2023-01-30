//Outputs three random numbers

#include <iostream>    //Declaration of cin and cout
#include <cstdlib>     //Prototypes of srand(), rand();
                       //void srand(unsigned int seed);
                       //int rand(void);
using namespace std;

int main()
{
    unsigned int seed;
    int z1, z2, z3;

    std::cout << " ----Random Numbers---- \n" << std::endl;
    std::cout << "To initialize the random number generator, "
        << "\nplease enter an integer value: ";
    std::cin >> seed; //input an integer

    srand(seed);      //and use it as an argument for a 
                      //new sequence of random numbers.
    z1 = rand();
    z2 = rand();
    z3 = rand();

    std::cout << "\nThree random numbers: "
        << z1 << "    " << z2 << "    " << z3 << std::endl;

    return 0;
}
