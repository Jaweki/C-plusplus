#include <iostream>
#include <climits>

int main()
{
    std::cout << "The Range of types int and unsigned int"
        << std::endl << std::endl;
    std::cout << "Type           Maximum                Minimum"
        << std::endl;
    std::cout << "---------------------------------------------"
        << std::endl;

    std::cout << "int           " << INT_MAX << "          " << INT_MIN << std::endl;


    std::cout << "unsigned int  " << UINT_MAX << "            0    " << std::endl;


    return 0;

}