#include <stdio.h>

int main () {
	int sizearr[6] = {sizeof(int), sizeof(char), sizeof(short), sizeof(long), sizeof(float), sizeof(double)};
	for(int i =0; i < 6; i++){
		printf("%d \n", sizearr[i]);
	}
	return 0;
}