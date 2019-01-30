#include<stdio.h>
int main()
{
	int n;
	int i,t;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		int a[n];
		int *p;
		p=a;
		for(i=0;i<n;i++)
		scanf("%d",p+i);
		int min=0;
		for(i=1;i<n;i++)
		{
			if(*(p+min)>*(p+i))
				min=i;
		}
		    t=*(p+min);
			*(p+min)=*p;
			*p=t;
		for(i=0;i<n;i++)
		{
			if(i!=0)
			{
				if(i==(n-1))
				printf(" %d\n",*(p+i));
				else printf(" %d",*(p+i));
			}
			else printf("%d",*(p+i));
		}
	}
	return 0;
}
