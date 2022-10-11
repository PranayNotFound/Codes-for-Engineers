#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

void inputMat(int n,double a[2][20])
{
    int i;
    cout<<"Enter the data in the format of x and f(x) : ";
    for (i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i<<" th element";
        cout<<"\nx = ";
        cout<<"\nf(x) = ";
        cin>>a[0][i];
        cin>>a[1][i];
    }
}
void f(int n,double a[2][20])
{
    int i,j,c;
    for (i=0;i<n;i++)
    {
        c=1;
        if(i!=j)
        {
            for (j=0;j<n;j++)
            {
                c=c*(1/(a[0][i]-a[0][j]));
                cout<<"(x-"<<a[0][j]<<")";
            }
            c=c*a[1][i];
        }
        cout<<" + ";
    }
}
int main()
{
    double a[2][10];
    inputMat(5,a);
    f(5,a);
}

