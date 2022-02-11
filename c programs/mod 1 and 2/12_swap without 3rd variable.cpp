#include<stdio.h>
#include <math.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers, first a then b ");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d",a);
	printf("\nb=%d",b);
}
