//
//  main.c
//  timer
//
//  Created by Tim on 12/2/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <stdlib.h>
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

double myRound(double);

struct timeSig {
    int num, den;
};

int main(){
    struct timeSig timeSignature;
    
    printf("Enter a time signature numerator \n");
    scanf("%d", &timeSignature.num);
    
    printf("Enter a time signature denominator \n");
    scanf("%d", &timeSignature.den);
    
    float mult;
    
    if (timeSignature.num != 3 && timeSignature.num % 3 == 0){
        mult = 1.5;
    }
    else {
        mult = 1.0;
    }
    
    printf("%f \n", mult);
    
    double beatSpace, BPM;
    
    printf("Enter a BPM metronome value \n");
    scanf("%lf", &BPM);
    
    beatSpace = mult * myRound((60000 / BPM) * 1000);
    
    int beatSpace2 = (int)beatSpace;
    
    printf("%d \n", beatSpace2);
    
    struct timeval start, end;
    
    gettimeofday(&start, NULL);
    usleep(beatSpace);
    gettimeofday(&end, NULL);
    
    long useconds, seconds, mtime;
    
    seconds  = end.tv_sec  - start.tv_sec;
    useconds = end.tv_usec - start.tv_usec;
    
    mtime = seconds + useconds;
    
    printf("Elapsed time: %ld microseconds\n", mtime);
    
    printf("Press enter to start metronome \n");
    getchar();
    
    int i = 1;
    
    if (mult == 1.0){
        while (1) {
            usleep(beatSpace2);
            printf("%d \n", i);
            if (i == timeSignature.num){
                i = 0;
            }
            i++;
        }
    }
    else {
        int div = timeSignature.num / 3;
        while (1) {
            usleep(beatSpace2);
            printf("%d \n", i);
            if (i == div){
                i = 0;
            }
            i++;
        }
    }

    
    return 0;
}

double myRound(double f){
    if (f >= 0x1.0p23) return f;
    return (float) (unsigned int) (f + 0.49999997f);
}