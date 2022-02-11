#include<stdio.h>
int inMat(int a[][10],int r,int c);
int disMat(int p[][10], int r, int c);
int chkTri(int a[][10],int r, int c);


int main()
{
	int r, c;
	printf("Enter the size of the matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c);fflush(stdin);
	
	int a[r][10];
	inMat(a,r,c);
	disMat(a,r,c);
	if (chkTri(a,r,c)==1)
	printf("Matrix is Not triangular");
	else 
	printf("Matrix is Triangular");
}



int chkTri(int a[][10],int r, int c)
{
	int flag=0;
	int du=0,dl=c-1,i,j,cu=0,cl=0;
	for (i=0;i<r;i++)
	{	
		cu=0;cl=0;
		for (j=0;j<c;j++)
		{
			if (a[i][j]==0)
			{
				cu++;
				cl++;
			}
		}
		printf("\n");
		if (cl!=dl && du!=cu)
		flag=1;
		
		du++;
		dl--;
		
	}
	if (flag==1)
	return 1;
	else
	return 0;

}







int inMat(int a[][10],int r, int c)									
{	
	int i,j;
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