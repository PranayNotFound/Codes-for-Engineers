#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int a1[100]={};
    int a2[100]={};
    int a3[100]={};
    int a4[100]={};
    int a5[100]={};
    char s[]={""};
    char *name[100]={};
    for (i=0;i<n;i++)
    {
        printf("Name %d : \n",i+1);
        scanf("%[^\n]",name[i]);
        printf("Enter the marks of the subjects\n");
        scanf("%d",&a1[i]);
        scanf("%d",&a2[i]);
        scanf("%d",&a3[i]);
        scanf("%d",&a4[i]);
        scanf("%d",&a5[i]);
    }
    printf("Name\t\tMaths\tPPS\tPhysics\tElectrical\tBio Science\n");
    for (i=0;i<n;i++)
    {
        printf("%s\t\t%d\t%d\t%d\t%d\t\t%d\n",name[i],a1[i],a2[i],a3[i],a4[i],a5[i]);
    }
}

