#include<iostream>
#include<cmath>
using namespace std;
int main()
{    //等差数列求和 Sn=n*an+n*(n-1)/2 
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF&&n&&m){
		int sum=0,i,a;
			for(i=sqrt(2*m);i>=1;i--){//和为m的元素个数应该小于等于（2*m）^1/2
			    a=(2*m-i*(i-1))/(2*i);
			    sum=i*a+i*(i-1)/2;
			    if(sum==m){
				   cout<<"["<<a<<","<<a+i-1<<"]"<<endl;
			    }
		    }
		    cout<<endl;
	}
	return 0;
} 
