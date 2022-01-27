#include<stdio.h>
int main()
	{ 
	  int basic_salary;
	  float gross_salary,HRA,DA,TA;
	  printf("enter the basic salary",basic_salary);
	  scanf("%d",&basic_salary);
	  HRA=0.6*basic_salary;
	  TA=0.4*basic_salary;
	  DA=0.5*basic_salary;
	  
	  gross_salary=basic_salary+TA+DA+HRA;
	  printf("gross salary is=%.2f",gross_salary);
	  return 0;
	  
	}
