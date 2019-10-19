#include<stdio.h>
int main()
{
	float a;int b;
	printf("Enter the number\n");
	scanf("%f",&a);
	b=(int)a%10;
	printf("The last digit of the number is :%d\n",b);
}
