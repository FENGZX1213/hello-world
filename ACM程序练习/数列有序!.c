#include<stdio.h>
int main()
{
	int n,m;
	int i,j,t;
	while(scanf("%d %d",&n,&m)&&n!=0&&m!=0)
	{
		int a[n],b[n+1];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<=n;i++)
		{
			
		   if(i==n) b[i]=m;
		   else b[i]=0;
		}
		i=0;
		while(i<n)
		{
			for(j=0;j<n;j++)
			{
				b[j]=a[i];
				i++;
			}
			i++;
		}
		    for(j=0;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(b[i]>b[i+1])
            {
                t=b[i];
                b[i]=b[i+1];
                b[i+1]=t;
            }
        }
    }
		for(i=0;i<n+1;i++)
		{
			if(i==0)
			printf("%d",b[i]);
			else printf(" %d",b[i]);
		}
		printf("\n");
	}
 } 
