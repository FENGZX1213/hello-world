#include<iostream>
using namespace std;
const int maxn=100000;
int a[maxn];
int main()
{
	int n,i,k=0,ans=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	while(k<n)
	{
		if(a[k]==k+1)
		{
			if(k+1<n && a[k+1]==k+2)
			{
				k+=2;
				ans++;
			}
			else
			{
				k++;
				ans++;
			}
		}
		else
			k++;
	}
	cout<<ans; 
	return 0;
}
