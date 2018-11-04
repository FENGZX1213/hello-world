#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	char buf[9];
	cin>>buf;
	int i,len,j=0;
	long long sum=0;
	len=strlen(buf);
	for(i=len-1;i>=0;i--)
	{
		
		if(isdigit(buf[i]))
		{
			sum=sum+pow(16,j)*(buf[i]-'0');
		}
		else
		{
			sum=sum+pow(16,j)*(buf[i]-'A'+10);
		}
		j++;
	}
	cout<<sum<<endl;
	return 0;
}
