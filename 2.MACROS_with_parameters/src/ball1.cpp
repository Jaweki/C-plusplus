//ball1.cpp
//Simulates a bouncing ball
//--------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

#define DELAY   90000000L
#define CLS     (std::cout<<"\033[2J")
#define LOCATE(z,s) (std::cout<<"\033["<<z<<';'<<s<<'H')
//Positon the cursor in row z and column s

void main()
{
    int x = 2, y = 3, dx = 1, speed = 0;
    string floor(79, '_'),
        header = "****  JUMPING BALL  ****";
    CLS;
    LOCATE(1, 25); std::cout << header;
    LOCATE(25, 1); std::cout << floor;

    while (true)     //Let the ball "always" bounce
    {                //Terminate by interrupt key (^C)
        LOCATE(y, x); std::cout << 'O' << std::endl;
        for (long wait = 0; wait < DELAY; ++wait)
            ;
        if (x == 1 || x == 79) dx = -dx; //Bounce off the wall?


        if (y == 24)                     //On the floor?
        {
            speed = -speed;             //Restart
            if (speed == 0) speed = -7;
        }
        speed += 1;                     //Acceleration = 1
        LOCATE(y, x); std::cout << ' '; //Clear output
        y += speed; x += dx;            //New Position
    }

    std::cout << "GAME HAS ENDED" << std::endl;
}
