#include<stdio.h>
#include <math.h>
#include <string.h>
int main()
{	
	int x,x1,x2,d,i=1;
	int s1=0,s2=0;
	
    printf("Enter the x to calculate its equivalent = ");
    scanf("%d",&x);
    
    x1=x;x2=x;
    while(x1!=0)
    {
    	d=x1%2;
	    x1/=2;
	    s1+=d*i;
	    i*=10;
    	
	}
	i=1;
	while(x2!=0)
	{
		d=x2%8;
		x2/=8;
		s2+=d*i;
		i*=10;
	}
	//printf("\nOctal value = %o",x);
	printf("Binary value = %d\nOctal value = %d\n",s1,s2);
	printf("Hexadecimal value = %x",x);
}
    