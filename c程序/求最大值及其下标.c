#include<stdio.h>
int main()
{
	int n,i,index=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>a[index])
		{
			index=i;
		}
	}
	printf("%d %d",a[index],index);
}
