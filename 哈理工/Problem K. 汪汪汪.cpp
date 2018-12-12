#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int l,r;
}n[100010];
int cmp(const node &A,const node &B)
{
	return A.r>B.r;
}
int main()
{
	int t,m;
	while(cin>>t)
	{
		m=t;
		int i,flag=0;
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&n[i].l,&n[i].r);
			if(n[i].l>n[i].r)
				swap(n[i].l,n[i].r);
		}
		sort(n,n+m,cmp);
		for(i=1;i<m;i++)
		{
			if(n[i].r<=n[0].r)
			{
				if(n[i].l<n[0].l)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
