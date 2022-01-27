#include<stdio.h>
#define PI 3.14
void main()
{ int radius,height;
  float volume;
  printf("enter the radius and height of cylinder");
  scanf("%d%d",&radius,&height);
  volume=PI*radius*radius*height;
  printf("volume of cylinder is%f",volume);
  
}
