#include<stdio.h>

void main()
{ int length,breadth,height;
  float volume;
  printf("enter the values of length,breadth and height");
  scanf("%d%d%d",&length,&breadth,&height);
  
  volume=length*breadth*height;
  printf("volume of cuboid is=%f",volume);
  
}
