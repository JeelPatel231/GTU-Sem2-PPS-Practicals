/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// if else ladder of showing grades based on input

#include <stdio.h>

int main(){
    int a;
    printf("Enter student's marks : ");
    scanf("%i", &a);
    if(a<40){printf("student has failed");}
    else if(a>=40 && a<60){printf("Passed with Second class Result");}
    else if(a>=60 && a<80){printf("Passsed with First class Result");}
    else if(a>=80 && a<=100){printf("Passed with distinction");}
    else{printf("marks should not exceed 100");}
}