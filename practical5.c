
/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// convert kilometers to other units

#include <stdio.h>

int main(){
    float a;
    printf("insert distance in kilometers : ");
    scanf("%f", &a);
    printf("Distance in Meters : %f \n" , a*1000);
    printf("Distance in Feets : %f \n" , a*3280.84);
    printf("Distance in Inches : %f \n" , a*39370);
    printf("Distance in Centimeters : %f \n" , a*100000);

}