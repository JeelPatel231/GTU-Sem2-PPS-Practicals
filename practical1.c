/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// functioning calculator in c

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    int a,b,c;
    scanf("%d", &a);
    if(a==5){
        printf("GoodBye\n");
        exit(0);
    }
    printf("Add 1st integer\n");
    scanf("%d", &b);
    printf("Add 2nd integer\n");
    scanf("%d", &c);
    printf("Answer : ");
    if(a==1){
        printf("%i\n", b+c);
    }
    else if(a==2){
        printf("%i\n", b-c);
    }
    else if(a==3){
        printf("%i\n", b*c);
    }
    else if(a==4){
        float i = b;
        float j = c;
        float z = i/j;
        printf("%f\n", z);
    }
    else{
        printf("invalid input\n");
        main();
    }
}