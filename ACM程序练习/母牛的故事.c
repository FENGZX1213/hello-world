#include<stdio.h>
int main()
{
	int n;
	int f[55];
	int i;
	for(i=0;i<55;i++)
	{
		if(i<=4) f[i]=i;
		else f[i]=f[i-1]+f[i-3];
	}
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		printf("%d\n",f[n]);
	}
	return 0;
}
