/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// distance travelled calculator
#include <stdio.h>

int main(){
    float u,t,a;
    printf("Enter initial speed : ");
    scanf("%f", &u);
    printf("Enter acceleration : ");
    scanf("%f", &a);
    printf("Enter time taken : ");
    scanf("%f", &t);
    printf("\nDisatance travelled : %f", u*t + 0.5*a*t*t);
}