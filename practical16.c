/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

//check the last digit of number is even or odd.

#include <stdio.h>

int main(){
    int a,b;
    printf("input your number : ");
    scanf("%i", &a);
    b = a % 10;
    printf("last digit is %i\n\n", b);
    if(b%2 == 0){printf("even!");}
    else{printf("odd!");}
}