#include <stdio.h>
#include <float.h>
int main() {
	double a,b,d=1;int c;
	scanf("%lf",&b);
	for (c=1;c<=b;c++)
	{
		d=d*c;
	}
	printf("%Lf",d);
}