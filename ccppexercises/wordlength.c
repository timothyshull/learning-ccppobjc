#include <stdio.h>

int main(){
	int nc;
	int c;

	nc = 0;
	
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t') {
			printf("%d \n", nc);
			break;			
			}
		else {
			++nc;
			}
		}
	return 0;
	}









