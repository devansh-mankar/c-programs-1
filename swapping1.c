//program for interchanging the values of two variables.
#include<stdio.h>

void main()
{ int a=10,b=30,temp;
printf("values beofre swapping");
printf(" %d %d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\nvalues after swapping");
  printf("%d %d",a,b);
}

