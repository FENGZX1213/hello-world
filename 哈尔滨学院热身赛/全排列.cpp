#include<iostream>
#include<algorithm>
using namespace std;
int a[10001];
int main()
{
	int N,M,i;
	cin>>N>>M;
	for(i=0;i<N;i++)
		cin>>a[i];
	while(M--)
	{
		next_permutation(a,a+N);
	}
	cout<<a[0];
	for(i=1;i<N;i++)
		cout<<' '<<a[i];
	cout<<endl;
	return 0;
}
