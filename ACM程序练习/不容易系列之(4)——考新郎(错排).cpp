#include<iostream>
using namespace std;
int main()
{
	/* 
     ��1��n���»�� m���Ҵ��ˣ�˵���Ƕ�m�Է򸾽��д��ţ� 
    ��2�����ǻ��� n-m���Ҷ��ˣ���n����ѡn-m�Է���Ϊ�ҶԵ÷򸾣�������ϣ�    
    �ܿ������Ϊ��1��*��2�� 
*/ 
	int c;
	long long f[20]={0,0,1};
		int i;
		for(i=3;i<=20;i++){
			f[i]=(i-1)*(f[i-1]+f[i-2]);  //���ű� 
		}
		cin>>c;
	while(c--){
			int n,m;
			long long sum1=1,sum2=1,k;
			scanf("%d %d", &n,&m);
			for(i=1;i<=(n-m);i++){  //n-m�Է��Ҷ��ˣ�������� 
				sum1=sum1*i;
				sum2=sum2*(n-i+1);
			}
			k=sum2/sum1;
			cout<<k*f[m]<<endl;
	} 
	return 0;
}
