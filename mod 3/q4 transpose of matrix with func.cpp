#include<stdio.h>
int inMat(int a[][10],int r,int c);
int disMat(int p[][10], int r, int c);
int trMat(int a[][10], int t[][10], int r, int c);

int main()
{	
	int r, c;
	printf("Enter the size of the first matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c);fflush(stdin);
	int a[r][10];int t[c][10];
	inMat(a,r,c);
	trMat(a,t,r,c);
	disMat(t,c,r);
}


int trMat(int a[][10], int t[][10], int r, int c)
{	
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
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