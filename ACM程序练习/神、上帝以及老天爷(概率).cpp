#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int c;
	long long f[20]={0,0,1};
		int i;
		for(i=3;i<=20;i++){
			f[i]=(i-1)*(f[i-1]+f[i-2]);
		}
	cin>>c;
	while(c--){
		int n;
		double N=1;
		cin>>n;
		for(i=1;i<=n;i++){
			N=N*i;
		}
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<f[n]/N*100<<"%"<<endl;
	}
	return 0;
}
