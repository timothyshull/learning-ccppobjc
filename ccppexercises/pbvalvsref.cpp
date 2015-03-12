#include <iostream>  

using namespace std;

int main()
{
	int x;
	int &r = x;
	x = 10;

			// r is now a nickname for x

	cout << '\n';
	cout << "x = " << x << " and r = " << r << '\n';
	cout << "Now we will set r = 20\n\n";

	r = 20;		// changing r will change x.  They are
			//  now names for the same storage location

	cout << "x = " << x << " and r = " << r << '\n';
	
	
}