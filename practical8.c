/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// show if the given number is +ve, -ve or 0

#include <stdio.h>

int main(){
    long double a;
    printf("Insert your number : ");
    scanf("%LF", &a);
    if(a<0){
        printf("a is -ve");
    }
    else if(a==0){
        printf("a is 0");
    }
    else{
        printf("a is positive");
    }
}