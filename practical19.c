/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// generate first n number of Fibonacci series

#include <stdio.h>

int main(){
    int i = 0;
    printf("%i\n",i);
    int j = 1;
    printf("%i\n",j);
    for(int n=0;n<2;n++){
        i = i + j;
        printf("%i\n",i);
        j = i + j;
        printf("%i\n",j);
    }
}