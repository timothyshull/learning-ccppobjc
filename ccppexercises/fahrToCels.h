//
//  fahrToCels.h
//  
//
//  Created by Tim on 11/1/14.
//
//

void fahrToCels(int lowLim, int hiLim, int step){
    for (int i = lowLim; i <= hiLim; i += step) {
        float conv, fahr;
        fahr = i;
        conv = ((fahr-32.0)*(5.0/9.0));
        printf("%4.2f %4.2f \n", fahr, conv);
    }
}