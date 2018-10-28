#include<stdio.h>
int main()
{
	int N,max=0,i,j;
	scanf("%d",&N);
	int a[N],b[1000]={0};
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i]==a[j])
			b[i]=b[i]+1;
		}
	}
	for(i=0;i<N;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			j=i;
		}
	}
	printf("%d %d",a[j],max);
}