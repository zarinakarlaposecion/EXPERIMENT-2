#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int valuex;
	double z = 2.5, y;
	float V;   
   
   cout << "Input the value for x: ";
   cin >> valuex;
   cout << "Input the value for y: ";
   cin >> y;
   
   switch (valuex)
   {
   		case 1:
   			if (y >= 1 && y < 5)
   			{ V = valuex * y * z; 
   			cout << ' ' << endl;
   			cout << setw (10);
   			cout << "V = " << fixed << setprecision(2) << V; }
   			
   			else if (y >= 5)
   			{ V = valuex + (y/z) ;
   			cout << ' ' << endl;
   			cout << setw (10);
   			cout << "V = " << fixed << setprecision(2) << V;}
   			break;
   			
   		case 2:
   			if (y <= 5)
   			{ V = abs ((valuex - y) / z) ;
   			cout << ' ' << endl;
   			cout << setw (10);
   			cout << "V = " << fixed << setprecision(2) << V;}
   			
   			else if (y > 5)
   			{ V = valuex - sqrt(y + z) ;
   			cout << ' ' << endl;
			cout << setw (10);
   			cout << "V = " << fixed << setprecision(2) << V;}
   			break;
   			
   		default: 
   			{ V = valuex + y + z ;
			cout << ' ' << endl;
			cout << setw (10);
   			cout << "V = " << fixed << setprecision(2) << V;}
   }
   
    getch();
    return 0;
}
