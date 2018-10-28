#include<stdio.h>
int main()
{
	int n,k,i,j,t,x=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}  
do
{
		for(i=0;(i+1)<(n-x);i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
		}
		x++;
}while(x<k);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",a[i]);
		}
		else printf(" %d",a[i]);
	}
}