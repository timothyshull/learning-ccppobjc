#include <stdio.h>

int lowerLimit();

int upperLimit(int);

int stepSize(int, int);

void fahrToCels(int, int, int);

int main(){
    int lowLim, hiLim, step;
    
    lowLim = lowerLimit();
    
    hiLim = upperLimit(lowLim);
    
    step = stepSize(lowLim, hiLim);
    
    fahrToCels(lowLim, hiLim, step);
    
    return 0;
}

int lowerLimit() {
    int lowLim;
    printf("Please enter a lower limit: ");
    scanf("%d", &lowLim);
    
    if (lowLim < 0 || lowLim > 1000) {
        printf("Please enter an integer between 0 and 1000 \n");
        return lowerLimit();
    }
    else {
        return lowLim;
    }
}

int upperLimit(int lowLim) {
    int hiLim;
    printf("Please enter an upper limit:");
    scanf("%d", &hiLim);
    
    if (hiLim < lowLim || hiLim > 1000) {
        printf("Please enter an integer between the lower limit and 1000 \n");
        return upperLimit(lowLim);
    }
    else {
        return hiLim;
    }
}

int stepSize(int lowLim, int hiLim) {
    int step;
    printf("Please enter a step size:");
    scanf("%d", &step);
    
    if (step > (hiLim - lowLim)) {
        printf("Please enter an integer between the lower limit and 1000 \n");
        return stepSize(lowLim, hiLim);
    }
    else {
        return step;
    }
}

void fahrToCels(int lowLim, int hiLim, int step){
    for (int i = lowLim; i <= hiLim; i += step) {
        float conv, fahr;
        fahr = i;
        conv = ((fahr-32.0)*(5.0/9.0));
        printf("%4.2f %4.2f \n", fahr, conv);
    }
}