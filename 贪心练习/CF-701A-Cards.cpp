#include<iostream>
#include<algorithm>
using namespace std;
struct ncard{
	int x;
	int y;
}c[110];
int cmp(ncard a,ncard b)
{
	return a.x<b.x;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c[i].x;
		c[i].y=i;
	}
	sort(c,c+n,cmp);
	for(i=0;i<n/2;i++)
	{
		cout<<c[i].y+1<<" "<<c[n-i-1].y+1<<endl;
	}
	return 0;
}
