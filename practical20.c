/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// add first and last digit

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s",str);
    int x,y;
    int len = strlen(str);
    sscanf(&str[0], "%1d", &x);
    sscanf(&str[len-1], "%1d", &y);
    printf("\nThe value of %d, %d : %d ", x,y, x+y);
    return 0;
}