#include<stdio.h>
#include<math.h>
main()
{
	float i,p,r,n,t,si,ci;
	printf("what do you want to calculate/n Enter 1 for simple intrest and 2 for compound intrest :\n");
	scanf("%f",&i);
	while(i!=0)
	{
	
	if(i==1)
	{
		printf("enter principle, rate and time : \n");
		scanf("%f%f%f",&p,&r,&t);
		si=p*r*t;
		printf("the simple intrest is : %f\n",si);
	}
	else if(i==2)
	{
		printf("enter principle, rate, time and no of years : /n");
		scanf("%f%f%f%f",&p,&r,&t,&n);
		ci=p*pow((1+r/n),n*t);
		printf("the compound intrest is : %f/n",ci);
	}
	else
	{
		printf("invalid chioce");
	}
}}
