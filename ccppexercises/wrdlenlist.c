//
//  wrdlenlist.c
//  
//
//  Created by Tim on 10/13/14.
//
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    int i, j;
    int *list;
    
    const int maxlength = 50;
    list = malloc(sizeof(int) * maxlength);
    
    i = 0;
    
    j = 0;
    
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            list[j] = i;
            i = 0;
            ++j;
            }
        else {
            ++i;
            }
        }
    for (int k = 0; k < j; ++k){
        printf("%d ", list[k]);
    }
    printf("\n");
    return 0;
    }
