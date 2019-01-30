#include<stdio.h>
int main()
{
	int n,number,i,sum;
	sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&number);
			sum=sum+number;
		}
		printf("%d\n\n",sum);
		sum=0;
	}
}
