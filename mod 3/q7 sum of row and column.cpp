#include<stdio.h>
int inMat(int a[][10],int r,int c);
int disMat(int p[][10], int r, int c);
int main()
{
	int r,c,i,j,sr=0;
	
	//inputting dimensions of matrices
	printf("Enter the size of the matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c);fflush(stdin);
	
	int sc[c];
	for (i=0;i<c;i++)
	sc[i]=0;
	
	int a[r][10];
	inMat(a,r,c);
	
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			sc[i]=sc[i]+a[j][i];
		}
	}
	
		printf("%c",218);
		for (i=0;i<c;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		
		for (i=0;i<r;i++)
		{
			printf("%c\t",179);
			sr=0;
			for (j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
				sr=sr+a[i][j];
			}
			printf("%c =",179);
			printf("\t%d",sr);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<c;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
		printf("Sum=\t");
		for (i=0;i<c;i++)
		{
			printf("%d\t",sc[i]);
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


