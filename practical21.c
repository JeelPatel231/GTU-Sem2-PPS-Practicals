/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// find the sum and average of different numbers which are accepted by user as many as user wants

#include <stdio.h>

int main() {
    int n,addition;
    n=4;
    addition = 0;
    int values[n];
    for(int i = 0; i < n; ++i) {
        printf("enter value %i : ", i);
        scanf("%d", &values[i]);
    }

    for(int i = 0; i < n; i++){
        addition = addition + values[i];
    }

    printf("\n%d is the addition\n", addition);
    printf("%f is the average", (float)addition/n);
}