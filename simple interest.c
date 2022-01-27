#include<stdio.h>
 
 int main()
 { long int principle,rate_of_interest,time,SI;
   printf("enter the principle,rate of interest and time");
   scanf("%d%d%d",&principle,&rate_of_interest,&time);
   
   SI=principle*rate_of_interest*time;
   printf("simple interest is %ld",SI);
   return 0;
   
   
 }
