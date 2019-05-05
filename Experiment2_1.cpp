#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	char package;
int hours;

cout << "List of available package...Please select \n" << endl;
cout << "Package A: 995/mo for 10 hours of access and additional P20/hr" << endl;
cout << "Package B: 1495/mo for 20 hours of access and additional P10/hr" << endl;
cout << "Package C: 1995/mo for unlimited access" << endl;

cout << "Enter the package purchased: \n";
cin >> package;
while(package!= 'A' && package!='a' && package!='B' && package!='b'&&
package!='C' && package!='c')
{cout <<"Error! You must select package A, B, or C.\n ";
cout <<"Enter the package purchased: ";
cin >> package;}

cout <<"Enter the number of hours used:\n";
cin >>hours;
cin.get();
while(hours < 0)
{cout <<"Invalid! Please input valid number of hours.\n";
cout <<"Enter the number of hours used. \n";
cin >> hours;}

if(package == 'A' || package == 'a')
{if (hours <= 10)
cout<<"Your monthly fee is: P995\n";
else cout<<"Your monthly fee is: P \n"<<995+(hours-10)*20;
}

if(package == 'B' || package == 'b')
{if (hours <= 20)
cout<<"Your monthly fee is: P1495\n";
else cout<<"Your monthly fee is: P \n"<<1495 + (hours-20)*10;
}

if(package == 'C' || package == 'c')
cout<<"Your monthly fee is: P1995 \n";

cin.get();
getch ();
return 0;
}

