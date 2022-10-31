
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;


#define f(x) x*sin(x)


int main()
{
    float l, u, integral=0.0, h, k;
    int i, n;

 l=0;
 u=3.1415/4;
 cout<<"Enter number of sub intervals: ";
 cin>>n;

 h = (u - l)/n;
 integral = f(l) + f(u);
 for(i=1; i<= n-1; i++)
 {
  k = l + i*h;

  if(i%3==0)
  {
    integral = integral + 2 * (f(k));
  }
  else
  {
    integral= integral + 3 * (f(k));
  }

 }

 integral = integral* h*3.0/8.0;

 cout<< endl <<"Required value of integration is: "<< integral;

 return 0;
}
