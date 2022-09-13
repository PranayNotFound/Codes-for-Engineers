#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define e 0.001

using namespace std;

double func(double x){
return (x*x*x) - (5*x) + 1;
}

double derivativefunc(double x){
return (3*x*x) - 5;
}

void NewtonRaphson(double x){
    int i = 5;
    while(i>0){
    x = x - (func(x)/derivativefunc(x));
    i--;
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
