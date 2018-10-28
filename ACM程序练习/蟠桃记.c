#include<stdio.h>
int main()
{
	int n;
	int sum;
	int i;
	int f[30]={1};
	for(i=1;i<30;i++)
	{
		f[i]=2*(f[i-1]+1);
	}
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		sum=f[n-1];
		printf("%d\n",sum);
	}
	return 0;
}
