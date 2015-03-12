#include <stdio.h>

int main (){
	float fahr, celsius;
	float lower, upper, step;

	lower = -20.0;
	upper = 150.0;
	step = 10.0;
	
	printf("\nFAHRENHEIT TO CELSIUS CONVERSION TABLE \n \n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius)+32.0;
		printf("%3.0f %6.3f\n", celsius, fahr);
		celsius = celsius + step;
		}
	printf("\n");
	return 0;
	}

