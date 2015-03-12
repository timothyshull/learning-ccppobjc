//
//  main.c
//  K&R Examples
//
//  Created by Tim on 10/15/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


int getline1(char *line);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    char *line;
    char *longest;

    max = 0;
    while ((len = getline1(line)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line); }
    if(max>0)
        printf("%s", longest);
return 0;
}

int getline1(char *s){
    char c;
    int size;
    size = 0;
    s = malloc(size * sizeof(char*));
    
    while ((c=getchar())!=EOF && c!='\n'){
        s[size] = c;
        size++;
        s = realloc(s, size * sizeof(char*));
//        array[size - 1] = string;
    }
    s[size] = '\0';
    free(s);
    return size;
}

void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}