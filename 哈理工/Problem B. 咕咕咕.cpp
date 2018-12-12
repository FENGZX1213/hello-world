#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int sum=0;
		string s;
		cin>>s;
		for(int i=0;s[i];)
        {
            if((s[i]=='c'||s[i]=='C')&&(s[i+1]=='c'||s[i+1]=='C')&&(s[i+2]=='p'||s[i+2]=='P')&&(s[i+3]=='c'||s[i+3]=='C'))
            {
                sum++;
                i=i+3;
            }
            else
                i++;
        }
        cout<<sum<<endl;
	}
	return 0;
}

