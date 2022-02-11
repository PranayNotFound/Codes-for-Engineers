#include<stdio.h>
#include <math.h>
int main()
{
    int i;int j,k,l;
    printf(" ");
    for (i=11;i>=8;i--)
    {
    	for (j=1;j<=i-8;j++)
    	{
    		printf("  ");
    	}
    	for (k=11;k>=i;k--)
    	{
    		printf("%d ",k);
		}
		for (l=i+1;l<=11;l++)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}




