#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	while(cin>>n){
		int i,flag=0;
		for(i=1;i<=n;i++){
				if((n%i)==0){
					flag=!flag;
			}
		}
		cout<<flag<<endl;
	}
	return 0;
}
