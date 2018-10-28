#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			sum=sum+a[i][j];
		}
	}printf("%d",sum);
} 