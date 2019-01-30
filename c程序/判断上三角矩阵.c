#include<stdio.h>
int main()
{
	int T,n,i,j,t=0,sum=0;
	scanf("%d",&T);
	while(t<T)
	{
		t++;
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
               sum=sum+a[i][j];
			}
		}
		if(sum==0)
		{
			printf("YES");
		}else
		{
			printf("NO");
		}
		sum=0;
		if(t!=T)
		{
			printf("\n");
		}
	}
 } 
