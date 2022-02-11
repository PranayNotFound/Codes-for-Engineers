#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter the dimensions of the matrix.\n");
	printf("Rows : ");
	scanf("%d",&r);
	printf("Column : ");
	scanf("%d",&c);
	int a[r][c];int t[c][r];
	
	//inputting the matrix values
	printf("Enter the values of the matrix row by row.");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	//transposing the matrix
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	// printing of the matrix
		printf("%c",218);
		for (i=0;i<r;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		
		//printing matrix data
		for (i=0;i<c;i++)
		{
			printf("%c\t",179);
			for (j=0;j<r;j++)
			{
				printf("%d\t",t[i][j]);
			}
			printf("%c",179);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<r;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
	
	
	
}