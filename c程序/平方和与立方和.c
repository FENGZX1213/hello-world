#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,t;
	int i,a[10000],j;
	int x=0,y=0;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		for(i=m-1,j=0;i<n;i++,j++)
		{
			a[j]=i+1;
		}
		for(j=0;j<=(n-m);j++)
		{
			if(a[j]%2==0)
			{
				x=x+pow(a[j],2);	
			}
			else 
			{
				y=y+pow(a[j],3);
			}	
		}
		printf("%d %d\n",x,y);
		x=0;
		y=0;
	}
	return 0; 
 } 
