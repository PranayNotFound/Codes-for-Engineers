#include<iostream>
using namespace std;
int main()
{
   int i,j,k,n;
   float a[10][10],b,x[10];
   n=3;
     a[1][1]=1;
	 a[1][2]=1;
	 a[1][3]=2;
	 a[1][4]=4;
	 a[2][1]=2;
	 a[2][2]=-1;
	 a[2][3]=3;
	 a[2][4]=9;
	 a[3][1]=3;
	 a[3][2]=-1;
	 a[3][3]=-1;
	 a[3][4]=2;

   for(j=1; j<=n; j++)
    {
      for(i=1; i<=n; i++)
      {
         if(i!=j)
         {
            b=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++)
            {
               a[i][k]=a[i][k]-b*a[j][k];
            }
         }
      }
   }
   for(i=1; i<=n; i++)
   {
      x[i]=a[i][n+1]/a[i][i];
   }
   cout<<"\nThe solution is:\n";
   cout<<"\nx = "<<x[1];
   cout<<"\ny = "<<x[2];
   cout<<"\nz = "<<x[3];
   return(0);
}
