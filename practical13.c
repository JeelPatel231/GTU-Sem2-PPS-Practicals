/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// compute gross and Nt from input basic

#include <stdio.h>

int main(){
    double a;
    printf("Value of Basic : ");
    scanf("%lf", &a);
    double gross = a+(a*0.1)+(a*.075)+300;
    printf("Gross = %f\n", gross );
    printf("Nt = %f\n", gross - a*0.125);
}