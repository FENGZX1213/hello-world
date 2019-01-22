#include<iostream>
using namespace std;
int main()
{
	int n,m;
	double cost,min=10000,a,b;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cost=a/b;
		if(cost<min)
			min=cost;
	}
	printf("%.8f\n",min*m);
	return 0;
}
