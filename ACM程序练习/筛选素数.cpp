#include<iostream>
using namespace std;
const int maxn=1000;
bool is_prime[maxn];
int prime[maxn];
int sieve(int n,int k)
{
	int p=0;
	for(int i=0;i<=n;i++)
		is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=n;i++)
	{
		if(is_prime[i])
		{
			prime[p++]=i;
		for(int j=i+i;j<n;j+=i)
			is_prime[j]=false;
		}	 
	}
	return is_prime[k];
}
int main()
{
	int n,num;
	cin>>n>>num;
	if(sieve(n,num))
	cout<<"是素数"<<endl;
	else
	cout<<"不是素数"<<endl;
	return 0;
}
