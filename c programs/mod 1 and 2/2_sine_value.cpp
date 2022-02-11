#include<stdio.h>
#include <math.h>
int main()
{	float x,sx=0,p;int i,j;
    printf("Enter the x to calculate its sine ");
    scanf("%f",&x);
    for (i=1;i<=50;i=i+2)
    {
    	p=1;
    	for (j=1;j<=i;j++)
    	{
    		p=p*j;
		}
		sx=sx+pow(x,i)*pow(-1,(2*i+6)/4)/p;
	}
	printf("\nSine value of %f is %.5f",x,sx);
	printf("\nNumber of terms used = 50.");
}
    