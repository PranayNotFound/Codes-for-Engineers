#include<stdio.h>
#include <math.h>
int main()
{
    int x;int x2;int s=0;int d;
    printf("Please enter the number  ");
    scanf("%d",&x);
    x2=x;
    while (x!=0)
    {
    	d=x%10;
    	s=s*10+d;
    	x=x/10;
	}
	if (s==x2)
	printf("Number is Palindrome");
	else
	printf("Number is not Palindrome");
}