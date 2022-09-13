
#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) l*pow(x,3)+m*pow(x,2)+n*x+o
float l,m,n,o;
void main()
{
    printf("\n ENTER THE COEFFICIENTS OF THE TERMS ");
    scanf("%f",&l);
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%f",&o);
    float a,b,fa,fb,fm,e,mid;
    printf("ENTER THE INITIAL TWO GUESSES\n");
    scanf("%f",&a);
    scanf("%f",&b);
    if(f(a)*f(b)>0)
    {
        printf("\n PLEASE ENTER VALUES SUCH THAT f(a)*f(b)<0");
        exit(0);
    }
    fa=f(a);
    fb=f(b);
    printf("\n ENTER THE TOLERABLE ERROR");
    scanf("%f",&e);
    printf("\nStep\t\ta\t\tb\t\tmid\t\tf(mid)\n");
    int i=1;
    do
    {
         mid= (a+b)/2;
         fm=f(mid);
        printf("%d\t\t%f\t%f\t%f\t%f\n",i, a, b, mid, fm);
        if(fa*fm<0)
        {
            b=mid;
        }
        if(fb*fm<0)
        {
            a=mid;
        }
        i++;

    }while(fabs(fm)>e);
    printf("\nRoot is: %f", mid);
}
