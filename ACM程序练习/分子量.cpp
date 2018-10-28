#include<iostream>
#include<cctype>
char in[100];
int sbit=0;
float mol;
using namespace std;
double find(char ch)
{
	switch(ch)
	{
		case 'C': return 12.01;
		case 'H': return 1.008;
		case 'O': return 16.00;
		case 'N': return 14.01;
	}
	
}
int main()
{
	int i=0,d=0,count=0;
	float sum=0;
	cin>>in;
	while(sbit==0) //һ��������ȫ������ 
	{
		d=0;
		count=0;
		mol=find(in[i]);
		i++;
		while(isdigit(in[i])) //�Ƿ�Ϊ���� 
		{
			d=d*10+(in[i]-'0');
			i++;
			count++;
		}
		if(count==0) d=1; //��ĸ��û������Ϊ1����ĸ 
		sum+=(d*mol);
		if(in[i]==0)
		{
			sbit=1;
		}
	}
	printf("%.3f\n",sum);
	return 0;
}
