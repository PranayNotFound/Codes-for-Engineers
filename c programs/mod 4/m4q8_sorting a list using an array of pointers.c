#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char *x[20];
    int i,n=0;
    void reorder(int n,char *x[]);
    printf("Enter no. of String : ");
    scanf("%d",&n);
    printf("\n");
     
    for(i=0;i<n;i++)
    {
        printf("Enter the Strings %d : ",i+1);
        x[i]=(char *)malloc(20*sizeof(char));
        scanf("%s",x[i]);
    }
    reorder(n,x);
    printf("\nreorder list is :  \n");
    for(i=0;i<n;i++)
                           {
                              printf("%d %s\n",i+1,x[i]);
                           }
                              getch();
}
                   void reorder(int n,char *x[])
                          {
                              int i,j;
                              char t[20];
                              for(i=0;i<n-1;i++)
                                       for(j=i+1;j<n;j++)
                                                if(strcmp(x[i],x[j])>0)
                                                  {
                                                            strcpy(t,x[j]);
                                                            strcpy(x[j],x[i]);
                                                            strcpy(x[i],t);
                                                  }
                                                            return;
                         }