#include<bits/stdc++.h>
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

void NewtonRaphson(double x){
    double e = pow(10,-6);
    double y=0.0,z=100.0;
    while((z-x)>e || (x-z)>e){
    z=x;
    x = x - (func(x)/derivativefunc(x));
    }
    cout<<"The required root is :"<<x;
}

int main() {
double x0;
cout<<"Enter your assumption :";
cin>>x0;
NewtonRaphson(x0);

return 0;
}
