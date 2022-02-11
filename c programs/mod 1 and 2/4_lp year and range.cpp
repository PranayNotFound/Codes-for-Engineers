#include<stdio.h>
int main()
{
    int yr;int i;int lpf=0;
    printf("Please enter the year  ");
    scanf("%d",&yr);
    if (yr%4==0)
    {
    if (yr%100==0 and yr%400==0)
    lpf=1;
    if (yr%100!=0)
    lpf=1;
	}
	if (lpf==1)
	printf("Leap year\n");
	else
	printf("Not a leap year\n");

	int yl;int yu;
	printf("Enter lower limit of year range  ");
	scanf("%d",&yl);
	printf("Enter the upper limit of year range  ");
	scanf("%d",&yu);
	for (i=yl;i<=yu;i++)
	{
		lpf=0;
		if (i%4==0)
	    {
		    if (i%100==0 and i%400==0)
		    lpf=1;
		    if (i%100!=0)
		    lpf=1;
		}
		if (lpf==1)
		{
		printf("%d",i);
		printf(" \n");
	}}
}




