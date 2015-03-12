//
//  lowerLimit.c
//  
//
//  Created by Tim on 11/1/14.
//
//

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
