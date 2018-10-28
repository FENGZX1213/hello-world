#include<stdio.h>
int main()
{
	int x,y;
	int flag=0;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x==0&&y==0) break;
		else
		{
			int n;
			int i;
			int k;
			for(i=x;i<y;i++)
			{
				n=i*i+i+41;
				for(k=2;k<n;k++)
				{
				  if(n%k==0) flag++;	
				} 
			}
		}
		if(flag==0) printf("OK\n");
		else printf("Sorry\n");
		flag=0;
	}
	return 0;
}
