#include<iostream>
using namespace std;
int main()
{
	/* 
     （1）n对新婚夫妇 m个找错了，说明是对m对夫妇进行错排， 
    （2）但是还有 n-m对找对了，从n对种选n-m对夫妇作为找对得夫妇，进行组合，    
    总可能情况为（1）*（2） 
*/ 
	int c;
	long long f[20]={0,0,1};
		int i;
		for(i=3;i<=20;i++){
			f[i]=(i-1)*(f[i-1]+f[i-2]);  //错排表 
		}
		cin>>c;
	while(c--){
			int n,m;
			long long sum1=1,sum2=1,k;
			scanf("%d %d", &n,&m);
			for(i=1;i<=(n-m);i++){  //n-m对夫妇找对了，组合问题 
				sum1=sum1*i;
				sum2=sum2*(n-i+1);
			}
			k=sum2/sum1;
			cout<<k*f[m]<<endl;
	} 
	return 0;
}
