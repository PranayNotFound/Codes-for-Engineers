#include<stdio.h>
int main()
{
	//inputting
	int r, c;
	int *ptrr,*ptrc;
	ptrr=&r;
	ptrc=&c;
	int *ptra[10];
	
	printf("Enter the size of the matrix.\n");
	printf("Enter no of rows : ");
	scanf("%d",ptrr);fflush(stdin);
	printf("Enter no of columns : ");
	scanf("%d",ptrc);fflush(stdin);
	int a[r][10];
	int k;
	for(k=0;k<r;k++)
	{
		ptra[k]=&a[k][0];
	}
	
	
	int i,j;
	printf("Enter the values of the matrix row by row.");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",ptra[i]++);fflush(stdin);
		}
		printf("\n");
	}
	
	for(k=0;k<r;k++)
	{
		ptra[k]=&a[k][0];
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
				printf("%d\t",*ptra[i]++);
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