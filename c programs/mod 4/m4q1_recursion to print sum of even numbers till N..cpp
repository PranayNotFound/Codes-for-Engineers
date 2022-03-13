#include <stdio.h>

int sumEven(int,int);

int sumEven(int a,int b)
{
	if (a>=0)
	{
		return (b+sumEven(a-1,b+2));
	}
	else
	return 0;
}

int main()
{
	int n,s;
	printf("Enter the value of N : ");
	scanf("%d",&n);
	printf("The sum of N even terms is = %d",sumEven(n,s));
}