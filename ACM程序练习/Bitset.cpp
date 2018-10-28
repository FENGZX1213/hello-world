#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n){
		char num[100];
		itoa(n,num,2);
		cout<<num<<endl;
	}
	return 0;
 } 
