#include<stdio.h>

int main()
{ int a=20,b=10;
 printf("values before swapping");
 printf("%d %d",a,b);
  a=a+b;
 b=a-b;
  a=a-b;
  
  printf("\n values after swapping");
  printf("%d %d",a,b);
 }
 
