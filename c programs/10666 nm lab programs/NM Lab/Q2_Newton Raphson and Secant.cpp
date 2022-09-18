#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>



using namespace std;

double func(double x){
return (230*x*x*x*x) + (18*x*x*x) + 9*x*x-221*x-9;
}

double derivativefunc(double x){
return (920*x*x*x)+(54*x*x) +18*x-221;
}


void NewtonRaphson(double x)
{
    double e = pow(10,-6);
    double y=0.0,z=100.0;
    while((z-x)>e || (x-z)>e){
    z=x;
    x = x - (func(x)/derivativefunc(x));
    }
    cout<<"The required root is :";
     std::cout << std::fixed;
    std::cout << std::setprecision(16);
    std::cout << x;
}


void Secant(double a, double b)
{
    double fa,fb,fm,mid=0,mid2;
    double e = pow(10,-6);

    if(func(a)*func(b)>0)
    {
        cout<<"Please enter values such that f(a)*f(b)<0";
        exit(0);
    }
    fa=func(a);
    fb=func(b);
    //int i=0;
    fm=1;
    while(fm>e||fm<-e)
    {
        fa=func(a);
        fb=func(b);
        mid2=mid;
        mid=((fb*a)-(fa*b))/(fb-fa);
        fm=func(mid);
        a=b;
        b=mid;
        //cout<<mid;
        //cout<<" ";
        //cout<<fm;
        //cout<<"\n";
        //i++;

    }

    cout<<"The required root is :";
    std::cout << std::fixed;
    std::cout << std::setprecision(16);
    std::cout << mid;
    //cout<<" ";
    //cout<<i;
}

int main() {
double x0;
double a0,b0;
int ch;
cout<<"Enter the method to be used to calculate(1 for Newton Raphson and 2 for Secant Method): \n1.Newton Raphson\n2.Secant Method\n";
cin>>ch;
if (ch==1)
{
    cout<<"Enter your assumption :";
    cin>>x0;
    NewtonRaphson(x0);
}
else if(ch==2)
{
    cout<<"Enter the initial two guesses.\n";
    cin>>a0;
    cin>>b0;
    Secant(a0,b0);
}



return 0;
}


