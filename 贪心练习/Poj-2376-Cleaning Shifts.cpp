#include<iostream>
#include<algorithm>
using namespace std;
struct Cows{
	int s;
	int e;
}c[25010];
int n,t;
bool cmp(Cows a, Cows b)
{
	return a.s<b.s || (a.s==b.s && a.e>b.e);
}
int main()
{
	while(scanf("%d %d",&n,&t)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d %d",&c[i].s,&c[i].e);
		sort(c,c+n,cmp);
		if(c[0].s!=1)
		{
			cout<<-1<<endl;
			continue;
		}
		int r=c[0].e,nr=c[0].e,ans=1;
		for(int i=1;i<n;i++)
		{
			if(c[i].s>r+1)
			{
				r=nr;
				ans++;
			}
			if(c[i].s<=r+1)
			{
				if(c[i].e>nr) nr=c[i].e;
				if(c[i].e == t)
				{
					r=t;
					ans++;
					break;
				}
			}
		}
		if(r==t) printf("%d\n",ans);
		else	printf("-1\n");
	}
	return 0;
}
