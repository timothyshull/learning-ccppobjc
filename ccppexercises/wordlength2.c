#include<Stdio.h>

int wordlength(){
	int nc;
	int c;

	nc = 0;
	
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t') {
			break;			
			}
		else {
			++nc;
			}
		}
	return nc;
	}
	
int main(){
	int c = wordlength();

	printf("%d \n", c);
	return 0;
	}