#include<stdio.h>
#include <math.h>
int main()
{
	int a,b,s;
	char ch,c;
	printf("enter the operator(a for addition, s for subtraction, m for multiplication and d for division)\n");
	scanf("%c",&ch);
	printf("Enter 2 numbers ");
	scanf("%d",&a);
	scanf("%d",&b);
	if (ch=='a')
	{
	    s=a+b;
	    printf("%d",a);
	    printf("+%d",b);
	    printf("=%d",s);
	}
	else if (ch=='s')
	{
		s=a-b;
	    printf("%d",a);
	    printf("-%d",b);
	    printf("=%d",s);
	}
	else if (ch=='m')
	{

	    s=a*b;
	    printf("%d",a);
	    printf("*%d",b);
	    printf("=%d",s);
	}
    else if (ch=='d')
	{
		s=a/b;
    	printf("%d",a);
	    printf("/%d",b);
	    printf("=%d",s);
	}
	else
    	printf("Wrong choice inputted!");
    }
