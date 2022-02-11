#include<stdio.h>
#include <math.h>
int main()
{
	int a,b,c,big;
	printf("Enter 3 numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	big=(a>b&&a>c? a:b>c? b:c);
	
	printf("\nThe biggest number is:%d",big);
}