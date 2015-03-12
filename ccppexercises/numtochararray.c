//
//  numtochararray.c
//  
//
//  Created by Tim on 10/13/14.
//
//

#include <stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    char uscrearray[c];
    
    for(int i = 0; i < c; ++i){
        uscrearray[i] = '_';
        }
    
    for(int j = 0; j < c; ++j){
        printf ("%c", uscrearray[j]);
    }
    printf("\n");
    return 0;
}
