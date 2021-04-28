/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

#include <stdio.h>

int main(){
    printf("simple interest calculator\n");
    float p,i,r,n;

    printf("insert Principal amount :");
    scanf("%f", &p);
    printf("insert Rate of interest :");
    scanf("%f", &r);
    printf("insert Number of years :");
    scanf("%f", &n);
    

    printf("Your simple interest is : %f",  (p*r*n)/100 );

}