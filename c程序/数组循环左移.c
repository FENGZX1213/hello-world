#include<stdio.h>
int main()
{
	int i,j,t,M,N;
	scanf("%d %d",&N,&M);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<M;j++)
	{
		t=a[0];
		for(i=0;i<N;i++)
		{
			a[i]=a[i+1];
			if(i==(N-1))
			{
				a[N-1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(i==0)
		{
			printf("%d",a[i]);
		}else
		{
			printf(" %d",a[i]);
		}
	}
}
