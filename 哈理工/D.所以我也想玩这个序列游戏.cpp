#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1000000;
bool s[maxn];
int main(){
    int n,m,ans,flag;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
		int sum=0;
        flag=0;
       	memset(s,0,sizeof(s));
        s[0]=1;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&ans);
            sum=(sum+ans)%m;
            if(s[sum])
            {
                flag=1;
            }
            s[sum]=1;
        }
        if(flag)
		{
            cout<<"YES"<<endl;

        }else
		{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
