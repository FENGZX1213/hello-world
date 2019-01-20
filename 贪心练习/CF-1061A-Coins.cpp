#include<iostream>
using namespace std;
int main()
{
	int s,n,cn=0;
	cin>>n>>s;
	while(s>n)
	{
		s=s-n;
		cn++;
	}
	cout<<cn+1<<endl;
	return 0;
}
