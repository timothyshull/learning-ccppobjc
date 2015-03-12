#include <stdio.h>

int main ()
{
   	char c;
 
   	printf("Enter character: ");
   	c = getchar();
 
   	printf("Character entered: %d", c);
   	printf("\n");
	putchar(c);
	printf("\n");

   	return(0);
}