#include<iostream>
#define max 50
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long fb[max]={1,1};//数据太大，防止溢出 
	int i;
	for(i=2;i<=50;i++)
	    fb[i]=fb[i-1]+fb[i-2];
	while(n--){
		int a,b;
		cin>>a>>b;
		cout<<fb[b-a]<<endl;
	}
	return 0;
 } 
