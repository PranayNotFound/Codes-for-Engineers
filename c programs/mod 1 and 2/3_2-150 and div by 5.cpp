#include<stdio.h>
#include <math.h>
int main()
{
    int i;
    int s=0;
    for (i=2;i<150;i=i+3)
    {
    	printf("%d",i);
    	printf(", ");
    	if (i%5==0)
    	s=s+i;
	}
	printf("\nThe sum of numbers divisible by 5 is ");
	printf("%d",s);
}