#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;

double f1(double y, double z)
{
    return (2-z-y)/4;
}
double f2(double z, double x)
{
    return (-6-2*z-x)/5;
}
double f3(double x, double y)
{
    return (-4-x-2*y)/3;
}

int gseidel(double x,double y,double z)
{
    double x0=1,x1=0,y0=1,y1=0,z0=1,z1=0,e=pow(10,-1);
    x1=x;y1=y;z1=z;
    while (x1-x0>e||y1-y0>e||z1-z0>e||x0-x1>e||y0-y1>e||z0-z1>e)
    {
        x0=x1;
        x1=f1(y1,z1);
        y0=y1;
        y1=f2(z1,x1);
        z0=z1;
        z1=f3(x1,y1);
    }
    cout<<"The value of 'x' is : ";
    cout<<x1;
    cout<<"\nThe value of 'y' is : ";
    cout<<y1;
    cout<<"\nThe value of 'z' is : ";
    cout<<z1;
}
int main()
{
    gseidel(0,0,0);
}


