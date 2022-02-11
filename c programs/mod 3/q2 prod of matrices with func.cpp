#include<stdio.h>
int inMat(int a[][10],int r,int c);
int disMat(int p[][10], int r, int c);
int mulMat(int a[][10], int b[][10], int c[][10], int r1, int c1, int r2, int c2);

int main()
{	
	int r1,c1,r2,c2;
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
	
	int a[r1][10], b[r2][10], c[r1][10];
	if (c1==r2)
	{
		inMat(a,r1,c1);
		inMat(b,r2,c2);
		mulMat(a,b,c,r1,c1,r2,c2);
		disMat(c,r1,c2);
	}
	else
	printf("The matrices are not multiplicable.");
}






int mulMat(int a[][10], int b[][10], int c[][10], int r1, int c1, int r2, int c2)
{
	int i,j,k;
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
		return 1;
}



int inMat(int a[][10],int r, int c)									
{	int i,j;
	printf("Enter the values of the matrix row by row.");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}



int disMat(int p[][10], int r, int c)
{		int i,j;
		printf("%c",218);
		for (i=0;i<c;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		
		//printing matrix data
		for (i=0;i<r;i++)
		{
			printf("%c\t",179);
			for (j=0;j<c;j++)
			{
				printf("%d\t",p[i][j]);
			}
			printf("%c",179);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<c;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
}