#include <stdio.h>

int main(){
    int lowLim, hiLim, step;
    
    printf("Please enter a lower limit: ");
    scanf("%d", &lowLim);
    
    if (lowLim < 0 || lowLim > 1000) {
        printf("Please enter an integer between 0 and 1000");
        return 0;
    }
	
    printf("Please enter an upper limit:");
    scanf("%d", &hiLim);
    
    if (hiLim < lowLim || hiLim > 1000) {
        printf("Please enter an integer between the lower limit and 1000");
        return 0;
    }
	
    printf("Please enter a step size:");
    scanf("%d", &step);
    
    if (step > (hiLim - lowLim)) {
        printf("Please enter an integer between the lower limit and 1000");
        return 0;
    }
    
    
    
    for (int i = lowLim; i <= hiLim; i += step) {
        float conv, fahr;
        fahr = i;
        conv = ((fahr-32.0)*(5.0/9.0));
        printf("%4.2f %4.2f \n", fahr, conv);
    }
}