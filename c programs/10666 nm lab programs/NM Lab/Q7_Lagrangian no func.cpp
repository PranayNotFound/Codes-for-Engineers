#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int i;double a[2][20];
    int n=5;
    cout<<"Enter the data in the format of x and f(x) : ";
    for (i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<" th element";
        cout<<"\nx = ";
        cin>>a[0][i];
        cout<<"\nf(x) = ";
        cin>>a[1][i];
    }

    int j;
    double c;
    for (i=0;i<n;i++)
    {
            c=1;
            for (j=0;j<n;j++)
            {
                if (i!=j)
                {

                    c=c*(1/(a[0][i]-a[0][j]));
                    //cout<<c<<"  ";
                    if(a[0][j]>0)
                    cout<<"(x-"<<a[0][j]<<")";
                    else
                        cout<<"(x+"<<abs(a[0][j])<<")";
                }
            }
            c=c*a[1][i];

            cout<<"*"<<c;
            if(i!=n-1)
            cout<<"  +  ";
        }
    }


