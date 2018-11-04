#include<iostream>
using namespace std;
char a[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n,m;
	int i,j,index;
	char b[27][27];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		index=0;
		for(j=i;j<m;j++)
		{
			b[i][j]=a[index++];
		}
		index=0;
		for(j=i-1;j>=0;j--)
			b[i][j]=a[++index];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}	
	return 0;
}
