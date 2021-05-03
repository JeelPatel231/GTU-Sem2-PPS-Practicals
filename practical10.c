/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// output the biggest value from 3 inputs

#include <stdio.h>

int main(){
    long double a,b,c;
    printf("Enter the first value : ");
    scanf("%LF", &a);
    printf("Enter the second value : ");
    scanf("%LF", &b);    
    printf("Enter the third value : ");
    scanf("%LF", &c);

    if(a<b){
        if(b<c){printf("%LF is the greatest value", c);}
        else{printf("%LF is the greatest value", b);}
    }
    else{printf("%LF is the greatest value", a);}
}
