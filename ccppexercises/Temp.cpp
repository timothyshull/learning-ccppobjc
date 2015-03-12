#include <iostream>
using namespace std;

int startTemp;
int endTemp;
int stepSize;

int main(){
	int x;
	cout<<"Please enter an initial temperature \n";
	cin>>startTemp;
	if(startTemp > 110 || startTemp <= 0){
		cout<<"Improper value \n";
		return 0;
		}
	
	int y;
	cout<<"Please enter an ending temperature \n";
	cin>>endTemp;
	if(endTemp > 120 || endTemp <= 10){
		cout<<"Improper value \n";
		return 0;
		}

	if(endTemp < startTemp){
		cout<<"The ending temperature must be greater than the starting temperature \n";
		return 0;
		}
	
	cout<<"Initial temp is "<<startTemp<<" and end temp is "<<endTemp<<" \n";
	
	int z;
	cout<<"Please enter a step size \n";
	cin>>stepSize;

	
	int i;
	for (i = startTemp; i <= endTemp; i += stepSize){
		cout<<i<<" \n";
		}

	return 0;
	}

