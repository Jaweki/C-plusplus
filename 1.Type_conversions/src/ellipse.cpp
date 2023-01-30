//Ellipse.cpp
//The program draws an ellipse
//The points (x,y) on an ellipse with center (0,0)
//and axes A and B satisfy:
//x = A*cos(t), y = B*sin(t)  for 0<=t<=2*PI
//-------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

#define  CLS           (std::cout<<"\n033[2J")
#define  LOCATE(z,s)   (std::cout<<"\033["<<(z)<<';'<<(s)<<'H')
#define  DOT(x,y)      (LOCATE(y,x)<<'*')

#define  PI 3.1416
#define  Mx 40         //The point(Mx, My)is the
#define  My 12         //center of the ellipse.
#define  A  25         //Length of main axis
#define  B  10         //Length of subsidiary axis

int main()
{
	int x, y;

	CLS;

	for (double t = 0.0; t <= PI / 2; t += 0.03)
	{
		x = (int)(A * cos(t) + 0.5);
		y = (int)(B * sin(t) + 0.5);
		DOT(x + Mx, y + My);
		DOT(x + Mx, -y + My);
		DOT(-x + Mx, y + My);
		DOT(-x + Mx, -y + My);
	}

	LOCATE(24, 0);

	return 0;
}