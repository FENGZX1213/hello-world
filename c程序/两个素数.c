#include<stdio.h>
int main()
{
	int i,k=0,n,j=0,a[10000],m;
	int sum,count=0;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=1;i<=n;i++)
	{
    	if(prime(i)==1)
      {
      	a[j]=i;
		j=j+1;
	  }
    }
    for(m=0;m<j;m++)
    {
    	i=m+1;
    	for(;i<j;i++)
    {
		
    	sum=a[m]+a[i];
		if(sum==n) 	
		{
		count++;
		}
		else
		{
			sum=0;
		}
	}
}
	printf("%d\n",count);
	count=0;
	j=0;
}return 0;
}
int prime(int  x)
{
	int k;
	if(x==1) return 0;
	for(k=2;k<x;k++)
	{
      if(x%k==0) break;
    }
    if(k>x/2) return 1;
    else return 0;
} 
