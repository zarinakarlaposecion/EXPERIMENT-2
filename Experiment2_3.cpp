#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	double y,z,V1,V2,V3,V4,V5;
	cout << "What is the value for x \n";
	cin >> x;
	cout << "What is the value for y \n";
	cin >> y;
	z = 2.5;
	switch (x)
	{
		case 1:
		if (y > 1 && y < 5)
		{V1= x*y*z;
		cout << "V is : \n" << std::setw(10) << fixed << setprecision (2)<< V1;}
		
		else if (y >= 5)
		{ V2 = x + (y/z);
		cout << "V is : \n" << std::setw(10) << fixed << setprecision (2)<< V2;}
		return 0;
		break;
		
		case 2:
		if (y <= 5)
		{V3 = abs((x-y)/z);
		cout << "V is : \n" << std::setw(10) << fixed << setprecision (2) << V3;}
		
		else if (y > 5)
		{V4 = x - sqrt(y+z);
		cout << "V is : \n" << std::setw(10) << fixed << setprecision (2) << V4;}
		return 0;
		break;
		
		default:
			{	V5 = x + y + z;
		cout << "V is: \n" << std::setw(10) << fixed << setprecision (2) << V5;}
		return 0;
		break;
		
	}
	getch ();
	return 0;
}
