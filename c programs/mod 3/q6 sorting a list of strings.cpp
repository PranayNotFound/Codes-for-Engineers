#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{	
	int l,nos,i;char temp[30];
	printf("Enter the number of string to be entered : ");
	scanf("%d",&nos);fflush(stdin);
	
	//inputting the strings
	char str[nos][100];
	for (i=0;i<nos;i++)
	{
		printf("Enter string %d : ",i+1);
		scanf("%s", &str[i]);
	}
	
	//display of entered strings
	printf("The original list of string is : \n");
	for (i=0;i<nos;i++)
	{
		printf("%s\n",str[i]);
	}
	
	//sorting by bubble sort
	for(int i=0; i<nos; i++)
	{
	    for(int j=0; j<nos-1-i; j++)
		{
	      	if(strcmp(str[j], str[j+1]) > 0)
		  	{
		        strcpy(temp, str[j]);
		        strcpy(str[j], str[j+1]);
		        strcpy(str[j+1], temp);
	      	}
		}
	}
	
	//printing the sorted strings
	printf("\nThe sorted list of the Strings is : \n");
	for (i=0;i<nos;i++)
	{
		printf("%s\n",str[i]);
	}
}