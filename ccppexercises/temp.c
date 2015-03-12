#include <stdio.h>

int main (){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("\nCELSIUS TO FAHRENHEIT CONVERSION TABLE \n \n");
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.3f\n", fahr, celsius);
		fahr = fahr +step;
		}
	printf("\n");
	return 0;
	}