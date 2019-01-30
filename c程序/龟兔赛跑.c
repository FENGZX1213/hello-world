#include<stdio.h>
int main()
{
	int r=0,t=0,min=0,T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		t=t+3;
		if(min==0&&i%10==0&&r>t)
		{
			min=30;
		}if(min==0)
		{
			r=r+9;
		}else 
		{
			min--;
		}
	}
	if(r>t)
	{
		printf("^_^ %d",r);
	}else if(t>r)
	{
		printf("@_@ %d",t);
	}else printf("-_- %d",r);
}
