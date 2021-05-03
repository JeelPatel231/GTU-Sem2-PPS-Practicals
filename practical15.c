/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// check min and max from a given numbers as input

#include <stdio.h>

int main() {
  int values[9];
  for(int i = 0; i < 10; ++i) {
    printf("enter value %i : ", i);
    scanf("%d", &values[i]);
  }
    int max = values[0];
    int min = values[0];

    for(int i = 0; i < 10; i++){
        if(values[i]>max){max = values[i];}
        if(values[i]<min){min = values[i];}
    }

    printf("\n%i is the max value\n", max);
    printf("%i is the min value", min);
}