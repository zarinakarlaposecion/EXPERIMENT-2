#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	char yesorno;

	cout << "What is your meter reading last month? (input in gallons) \n";
	cin >> a;
	cout << "What is your meter reading in the present month? (input in gallons) \n";
	cin >> b;
	cout << "Did you paid the last month's water bill? (yes/no) \n";
	cin >> yesorno;
	
	c = b - a;
	d = c*1.10;
	e = d + 35 + 20;
	f = d + 35;
	
	switch (yesorno)
	{
		case 'y':
		case 'Y':
		cout << "Your bill is PHP " << f << "";
		break;
		
		case 'n':
		case 'N':
		cout << "You have an unpaid balance, your bill is PHP " << e << ", includes the late fee.";
		break;
		
		default:
		cout << "Please answer whether yes or no?";
		return 0;
		break;
	}
	
	getch();
	return 0;
}
