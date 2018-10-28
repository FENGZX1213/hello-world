#include<stdio.h>
#include<math.h>
int main()
{
	double n;
	while(scanf("%lf",&n)!=EOF)
	{
		if(n<0) printf("%.2f\n",fabs(n));
		else printf("%.2f\n",n);
	}
 } 
