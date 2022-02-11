#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,realPart,imagPart;
    printf("Enter the values of a, b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if (discriminant<0)
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %5.2f+%5.2fi and root2 = %5.2f-%5.2fi", realPart, imagPart, realPart, imagPart);
    }
    else
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n",root1,root2);
    }
}
