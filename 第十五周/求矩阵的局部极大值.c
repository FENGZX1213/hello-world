#include<stdio.h>
int main()
{
	int M,N,i,j,count;
	scanf("%d %d",&M,&N);
	int a[M][N];
    for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<M-1;i++)
{
	{
		for(j=1;j<N-1;j++)
		{
		if(a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i-1][j])
		{
			printf("%d %d %d\n",a[i][j],i+1,j+1);
			count++;
		}
	    }
	}
}
	if(count==0)
	{
		printf("None %d %d",M,N);
	}
}