#include <stdio.h>

int main() {
	char c;
	int d;

	c = EOF;
	d = EOF;

	printf("%c %d \n", c, d);

	c = ' ';
	d = ' ';

	printf("%c %d \n", c, d);

	c = '\n';
	d = '\n';

	printf("%c %d \n", c, d);

	c = '\t';
	d = '\t';

	printf("%c %d \n", c, d);

	return 0;
	}