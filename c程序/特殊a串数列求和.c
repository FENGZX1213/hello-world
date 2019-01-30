#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a=1;
	double sum=1.00;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		sum=sum+1.00/a;
	}
	printf("%.8f",sum);
} 
