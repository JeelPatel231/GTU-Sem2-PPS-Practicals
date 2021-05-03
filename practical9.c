/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// take input and show if pass or fail
// passing marks here are taken as 33

#include <stdio.h>

int main(){
    long double a;
    printf("Enter marks  out of 100 : ");
    scanf("%LF", &a);
    if(a<33){
        printf("Student has failed!");
    }
    else if(33<=a && a<100){
        printf("student has passed!");
    }
    else{
        printf("Invalid input, enter out of 100");
    }
}