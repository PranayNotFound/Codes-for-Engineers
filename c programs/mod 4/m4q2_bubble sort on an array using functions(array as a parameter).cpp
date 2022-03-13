#include <stdio.h>
int bSort(int [],int);



int bSort(int list[],int n)
{
	long c, d, t;
 
  for (c=0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
}
}
}
}



int main()
{
	
	int n,i;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter the array elements : ");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nUnsorted Array : ");
	for (i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	
	bSort(arr,n);
	printf("\n\nSorted Array : ");
	for (i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 1;
}
