/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// if else ladder of showing grades based on input

#include <stdio.h>

int main(){
    int a;
    printf("input relative number corresponding to day : ");
    scanf("%i",&a);
    if (a==1){printf("sunday");}
    else if (a==2){printf("monday");}
    else if (a==3){printf("tuesday");}
    else if (a==4){printf("wednesday");}
    else if (a==5){printf("thursday");}
    else if (a==6){printf("fridayday");}
    else if (a==7){printf("saturday");}
    else{printf("number not in the range of 1 to 7");}
}