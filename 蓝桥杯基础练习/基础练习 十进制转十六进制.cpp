#include<iostream>
#include<string>
using namespace std;
int main()
{
	long a;//输入的数
	int y=0;//循环中的余数
	string s="";//输出的结果
	cin>>a;
	//cout<<setiosflags(ios::uppercase)<<hex<<a;
	if(a==0)//0比较特殊，单独处理
	{
	cout<<0;
	return 0;
	}
	while(a>0)//大于0的数
	{
		y=a%16;  //求余
		if(y<10)   //小于10的余数
		s=char('0'+y)+s;  //利用字符的ascll码在字符串前面拼接
		else
		s=char('A'-10+y)+s;  //大于9的余数用ABCDE表示
		a=a/16;   
	}
	cout<<s;
	return 0;
}
