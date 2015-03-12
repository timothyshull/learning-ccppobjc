#include <stdio.h>

int main(){
	int &a = 5;
	
	for (; &a < 10; &a++){
		return &a;
	}
	printf("%d\n", &a);
	return 0;
}