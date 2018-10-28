#include<iostream>
#include<cstdio>
using namespace std;
const int MAX=10000001;
int pre[MAX],sum[MAX],maxx;
int find(int x)
{
	if(pre[x]==x)
	return x;
	else
	return pre[x]=find(pre[x]);
}
int mix(int x,int y)
{
	int fx,fy;
	fx=find(x),fy=find(y);
	if(fx!=fy)
	{
		pre[fy]=fx;
		sum[fx]+=sum[fy];
		if(sum[fx]>maxx) maxx=sum[fx];
	}
	return maxx;
}
int main()
{
	int n,i,a,b;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=MAX;i++)
		{
			pre[i]=i;
			sum[i]=1;
		}
		maxx=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&a,&b);
			mix(a,b);
		}
		cout<<maxx<<endl;
	}
	return 0;
}
