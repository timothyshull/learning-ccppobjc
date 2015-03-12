//
//  2darray.c
//  
//
//  Created by Tim on 10/14/14.
//
//

#include <stdio.h>

#define COMPARE 5
#define NW 5


int main(){
    int list[5] = {1, 2, 3, 4, 5};
    char histoarray[COMPARE][NW];
    
//    int histostep;
//    
//    histostep = 0;
    
    for (int histostep = 0; histostep < COMPARE; ++histostep){
        for (int r = 0; r < NW; ++r){
            if (r < list[histostep]){
                histoarray[histostep][r] = '_';
            }
            else (histoarray[histostep][r] = ' ');
        }
        
    }
    
    for (int s = 0; s < COMPARE; ++s){
        for (int t = 0; t < NW; ++t){
            printf("%c", histoarray[s][t]);
        }
        printf("\n");
    }
    return 0;

}
