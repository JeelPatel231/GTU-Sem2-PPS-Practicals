/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// find the sum and average of subjects for 3 students

#include <stdio.h>

int main() {
    for(int o = 0; o<3;o++){
        int n,addition;
        n=5;
        addition = 0;
        printf("enter subject marks for student %i\n\n",o+1);
        int values[n];
        for(int i = 0; i < n; ++i) {
            printf("enter value %i : ", i+1);
            scanf("%d", &values[i]);
        }

        for(int i = 0; i < n; i++){
            addition = addition + values[i];
        }

        printf("\n%d is the addition\n", addition);
        printf("%f is the average\n\n", (float)addition/n);
    }
}