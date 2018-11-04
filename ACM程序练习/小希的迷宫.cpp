#include<iostream>
using namespace std;
int s[100001];
int main()
{	
	int a,b,i,num=0,v=0,flag=0;
	while(1)
	{
		cin>>a>>b;
		if(a==-1&&b==-1) break;
		if(a==0&&b==0)
		{
			if(flag==0){
				cout<<"Yes"<<endl;
				continue;
			}
			if(num==v-1)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
			num=flag=v=0;
			for(i=1;i<=100001;i++)
				s[i]=0;
			continue;
		}
		flag=1;
		if(s[a]==0) v++;//结点数 
		if(s[b]==0) v++;
		s[a]=s[b]=1;
		num++;//边数 
	}
	return 0;
 } 
