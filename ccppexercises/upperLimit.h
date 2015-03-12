//
//  upperLimit.c
//  
//
//  Created by Tim on 11/1/14.
//
//

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
