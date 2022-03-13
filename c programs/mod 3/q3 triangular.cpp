#include<stdio.h>
int main()
{
	//inputting
	int r, c;
	printf("Enter the size of the matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",&r);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",&c);fflush(stdin);
	int a[r][10];
	
	
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
	
	//printing original matrix
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
				printf("%d\t",a[i][j]);
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
		
		
		
	int chkUpTri;
	int flag=0;
	for (i=0;i<r;i++)
	{	
		for (j=0;j<i;j++)
		{
			if (a[i][j]!=0)
			{
				flag=1;
			}
		}
		
	}
	if (flag==1)
	 chkUpTri=1;
	else
	chkUpTri=0;	
	
	
	int chkLoTri;
	flag=0;
	for (i=0;i<r;i++)
	{	
		
		for (j=i+1;j<c;j++)
		{
			if (a[i][j]!=0)
			{
				flag=1;
			}
		}
		
	}
	if (flag==1)
	 chkLoTri=1;
	else
	chkLoTri=0;	
		
	if (chkUpTri==0 || chkLoTri==0)
	printf("Matrix is Triangular.");
	else 
	printf("Matrix is Not Triangular.");	
		
}