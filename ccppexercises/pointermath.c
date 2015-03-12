#include <stdio.h>
#include <string.h>

int main(){
	int **p;
	int *b;
	int c = 3;
	b = &c;
	p = &b;
	
	printf("%p \n", b);
	printf("%p \n", p);
	
	printf("%d \n", *b);
	printf("%p \n", *p);
	printf("%d \n", **p);
	
	return 0;
}



