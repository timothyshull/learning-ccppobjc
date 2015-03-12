#include <iostream>
using namespace std;

int main(){
	int var1 = 0;
	int *var2;
	int *var3;
	var3 = &var1;
	int var4;
	var4 = *var2;
	int *var5;
	var5 = &var1;

	cout<<var1<<" \n";
	cout<<var2<<" \n";
	cout<<var3<<" \n";
	cout<<var4<<" \n";
	cout<<var5<<" \n";

	return 0;
	}

	