#include <stdio.h>

int main(){
	int a = 0;
	int * b = &a;
	
	printf("%d \n", a);
	printf("%p \n", (void *)b);
	
	int c[3] = {1, 5, 9};
	printf("%d \n", c[0]);
	printf("%p \n", (void *)c);
	printf("%p \n", (void *)(c+1));
	printf("%p \n", (void *)(c+2));
	printf("%d \n", *c);
	printf("%d \n", *(c+1));
	printf("%d \n", *(c+2));
	printf("%d \n", (int)sizeof(int));
}