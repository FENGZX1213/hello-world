#include<stdio.h>
int main()
{
	int T;
	int sum;
	int a,b;
	int k=1;
	scanf("%d",&T);
	while(T)
	{
	while(scanf("%d\n%d",&a,&b)!=EOF)
	{
		sum=0;
		int i;
		for(i=a;i<=b;i++)
		{
			if(i%2!=0)
			{
				sum=sum+i;
			}
	    }
		printf("Case %d: %d\n",k,sum);
		break;	
	}
	k++;
	T--;	
	}
	return 0;
} 
