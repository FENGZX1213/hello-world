#include<iostream>
#include<string>
using namespace std;
int main()
{
	long a;//�������
	int y=0;//ѭ���е�����
	string s="";//����Ľ��
	cin>>a;
	//cout<<setiosflags(ios::uppercase)<<hex<<a;
	if(a==0)//0�Ƚ����⣬��������
	{
	cout<<0;
	return 0;
	}
	while(a>0)//����0����
	{
		y=a%16;  //����
		if(y<10)   //С��10������
		s=char('0'+y)+s;  //�����ַ���ascll�����ַ���ǰ��ƴ��
		else
		s=char('A'-10+y)+s;  //����9��������ABCDE��ʾ
		a=a/16;   
	}
	cout<<s;
	return 0;
}
