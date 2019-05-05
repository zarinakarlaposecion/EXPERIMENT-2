#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int counter;
	cout << "Counting to 30... START!\n";
	//initialization is here
	for(counter=1;counter<=9;counter++) 
	{
		//output numbers on the same line
		cout << counter << "," ;
	}
	for(counter=10;counter<=30;counter+=2)
	{
		//output numbers on the same line
		cout << counter << ",";
	}
	getch();
	return 0;
}
