/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// compute factorial

#include <stdio.h>

int main(){
    long double a;
    printf("input number : ");
    scanf("%LF", &a);
    long double i = a;
    printf("initial value : %LF\n", i);
    while (i>1)
    {
        a=a*(i-1);
        i=i-1;
    }
    printf("Factorial computed : %LF",a);
    
}