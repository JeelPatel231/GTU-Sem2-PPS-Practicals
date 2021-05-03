/*
Copyright (c) 2021 Jeel 
This code is made by @jeelpatel231 on github and you shall only use this code under the compliance of license
*/

// reverse number/string

#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  scanf("%s",str);
  int len = strlen(str);
  for(int i = len ; i>0 ; --i){printf("%c", str[i-1]);}
  printf("\n");
}