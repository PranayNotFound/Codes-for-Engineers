#include <stdio.h>
int main()
{
    int n1, n2, i, gcd,gcd2,c=0;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1;i<=n1 && i<=n2;++i)
    {

        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
	printf("G.C.D of %d and %d is : %d.", n1, n2, gcd);


	int x[9]={0,0,0,0,0,0,0,0,0};int j;
    printf("\nEnter 9 numbers : ");
    for(i=0;i<9;i++)
    {
    	scanf("%d",&x[i]);
	}
	for(j=1;j<=x[1] && j<=x[2] && j<=x[3] && j<=x[4] && j<=x[5] && j<=x[6] && j<=x[7] && j<=x[8] &&j<=x[0] ;j++)
    {
		c++;
        if(x[1]%j==0 && x[2]%j==0 && x[3]%j==0 && x[4]%j==0 && x[5]%j==0 && x[6]%j==0 && x[7]%j==0 && x[8]%j==0 && x[0]%j==0)
            gcd2 = j;
    }
    printf("\nG.C.D of the given 9 numbers is : %d.",gcd2);

}
