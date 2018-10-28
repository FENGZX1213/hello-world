#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int r;
	while(b!=0){
		  r=a%b;
		  a=b;
		  b=r;
	}
	return a;
}
int main()
{
	int n;
	int sum;
	while(cin>>n&&n){
	      int a,i,b,s;
	      int num[100000];
	      for(i=0;i<n;i++){
	      	cin>>num[i];
		  }
		  sum=num[0]/gcd(num[0],num[1])*num[1];
		  for(i=2;i<n;i++){
		    sum=sum/gcd(sum,num[i])*num[i];
		  }
		  cout<<sum<<endl;
		  }	
	return 0;
}
