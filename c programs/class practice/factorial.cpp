#include <stdio.h>
int main() {
	double tcases, input, mid1, i;
	double output;
	scanf("%lf", &tcases);
	
	while (tcases >0) {
		scanf("%lf",&input);
		mid1=1;
		
		for (i=1;i<=input;i++) {
			mid1=mid1*i;
			output=mid1;
		}
		printf("%lf\n",output);
		
	--tcases;
	}
	return 0;
}