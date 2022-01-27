#include<stdio.h>

int main()
{  int base,height;
   float area;
   printf("enter the base and height");
   scanf("%d%d",&base,&height);
   
   area=(base*height)/2;
   printf("area of triangle is %.2f",area);
   return 0;
}
