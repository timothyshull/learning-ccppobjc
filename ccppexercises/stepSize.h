//
//  stepSize.h
//  
//
//  Created by Tim on 11/1/14.
//
//

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
