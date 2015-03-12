//
//  histovert2.c
//  
//
//  Created by Tim on 10/13/14.
//
//

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 50

//int wordcount();
//int *wrdlenlist();
//char numtochararray(int numscre);

int main(){
//    char uscrearray[wordcount1];
    
    int charin;
    int i1, j1, nw, state;
    int *list;
    
//    const int maxlength = 50;
    list = malloc(sizeof(int) * MAXLENGTH);
    
    i1 = 0;
    
    j1 = 0;
    
    state = OUT;
    
    nw = 0;
    
    while ((charin = getchar()) != EOF){
        if (charin == ' ' || charin == '\n' || charin == '\t'){
            state = OUT;
            list[j1] = i1;
            i1 = 0;
            ++j1;
        }
        else {
            ++i1;
            if (state == OUT) {
                state = IN;
                ++nw;
            }
            }
        }
    
    printf("Word count: %d \n", nw);
    
    int compare;
    
    compare = 0;
    
    for(int k = 0; k < j1; ++k){
        if (list[k] > compare)
            compare = list[k];
    }
    printf("%d \n", compare);
    
    char histoarray[nw][compare];
    
    //    int histostep;
    //
    //    histostep = 0;
    
    for (int histostep = 0; histostep <= nw; ++histostep){
        for (int r = 0; r <= compare; ++r){
            if ((r) < list[histostep]){
                histoarray[histostep][r] = '_';
            }
            else (histoarray[histostep][r] = ' ');
        }
        
    }
    
    for (int s = (compare-1); s >= 0; --s){
        for (int t = 0; t <= nw; ++t){
            printf("%c", histoarray[t][s]);
        }
        printf("\n");
    }
    
//    for (int s = 0; s < nw; ++s){
//        for (int t = 0; t < compare; ++t){
//            printf("%c", histoarray[s][t]);
//        }
//        printf("\n");
//    }
    return 0;
}


    




