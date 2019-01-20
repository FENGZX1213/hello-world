#include<iostream>
#include<algorithm>
using namespace std;
int a[1010];
int main()
{
	int ds[2];
	ds[0]=0;
	ds[1]=0;
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	j=0;
	k=n-1;	
	for(i=0;i<n;i++)
	{
		if(a[j]<a[k])
		{
			ds[i%2]+=a[k];
			k--;
		}
		else
		{
			ds[i%2]+=a[j];
			j++;
		}
	}
	cout<<ds[0]<<' '<<ds[1]<<endl; 
	return 0;
}
