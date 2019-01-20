#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,temp,ans,i;
	vector<int> v[4];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>temp;
		v[temp].push_back(i);
	}
	ans=min(v[1].size(),min(v[2].size(),v[3].size()));
	cout<<ans<<endl;
	while(ans--)
		cout<<*(v[1].begin()+ans)<<" "<<*(v[2].begin()+ans)<<" "<<*(v[3].begin()+ans)<<endl;
	return 0;
}
