#include<stdio.h>
#include <math.h>
int main()
{
    int x;int i;int c=0;
    printf("Please enter the number  ");
    scanf("%d",&x);
    for (i=2;i<x;i++)
    {
    	if (x%i==0)
    	{c++;
		}
	}
	if (c==0)
	printf("Prime number\n");
	else 
	printf("Not Prime number\n");
	int n1=0,n2=1,n3;
	while (n1<x)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;	
	}
	if (n1==x)
	printf("Fibonacci number");
	else
	printf("Not a fibonacci number");
}