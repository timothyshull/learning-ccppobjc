#include <stdio.h>
#include <stdlib.h>

int main(){
 	char *test1 = "3.141593";
 	char *test2 = "123.5e15unrecognized 'u'";
 	double result;

 	result = atof(test1);
 	printf("test1 is %g\n", result);

 	result = atof(test2);
 	printf("test2 is %g\n", result);
	return 0;
	}