#include<stdio.h>
#define PI 3.14
void main()
{ int radius,height;
 float volume;
 printf("enter the values of radius and height");
 scanf("%d%d",&radius,&height);
 volume=(PI*radius*radius*height)/3.0;
 printf("volume of cone is=%f",volume);
 
 
}
