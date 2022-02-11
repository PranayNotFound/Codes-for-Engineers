#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	//inputting dimensions of matrices
	printf("Enter the size of the first matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r1);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c1);fflush(stdin);
	printf("Enter the size of the second matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r2);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c2);fflush(stdin);

	if (c1==r2)
	{	
		//inputting the matrices
		int a[r1][c1], b[r2][c2], c[r1][c2];
		printf("Enter the values of first matrix filling row by row : ");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
			printf("\n");
		}
		
		
		printf("Enter the values of second matrix filling row by row : ");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
			printf("\n");
		}
		
		//multiplying the matrices
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				c[i][j]=0;
				for (k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		
		// printing of the matrix
		printf("%c",218);
		for (i=0;i<c2;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		
		//printing matrix data
		for (i=0;i<r1;i++)
		{
			printf("%c\t",179);
			for (j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("%c",179);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<c2;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
	}
	else
	printf("The matrices are not multiplicable.");
}