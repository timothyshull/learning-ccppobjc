//
//  newline.c
//  
//
//  Created by Tim on 10/13/14.
//
//

#include <stdio.h>

int main (){
    int c;
    
    while ((c = getchar()) != EOF){
        if (c == ' ')
            putchar ('\n');
        else
            putchar(c);
    }
    return 0;
}
