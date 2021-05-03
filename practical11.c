/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// check if entered char has capital, small letter, digit or special char


// one one of doing it, using simple  if else statements
// you can also use ctype.h header file 
#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if (a>='A' && a<='Z'){printf("char %c is uppercase", a);}
    else if (a>='a' && a<='z'){printf("char %c is lowercase", a);}
    else if (a>='0' && a<='9'){printf("char %c is integer", a);}
    else{printf("char %c is a special character", a);}
}
