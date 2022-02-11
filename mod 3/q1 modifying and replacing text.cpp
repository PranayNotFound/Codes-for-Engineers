#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char text[50]; char a[50]="";
	int i,l,j,c;
	printf("Enter the text : ");
	gets(text);
	l=strlen(text);
	for (i=0;i<l;i++)
	{
		if (text[i]>=97 && text[i]<=122)
		{
			a[i]=toupper(text[i]);
			printf("%c",a[i]);
		}
		else if (text[i]>=65 && text[i]<=90)
		{
			a[i]=tolower(text[i]);
			printf("%c",a[i]);
		}
		else if (text[i]>=48 && text[i]<=57)
		{
			a[i]='0';
			printf("%c",a[i]);
		}
		else
		{
			printf("%c",246);
			//a[i]=246;
			//a[++i]='*';
			//a[++i]=237;
			//c=c+2;
			printf("*");
			printf("%c",237);
		}
	}
	//printf("%d\n\n",(c));
	for (j=0;j<=l+c;j++)
	{
		//printf("%c",a[j]);
	}
}