#include<iostream>
using namespace std;
int pre[1000];//1000个节点
int Find(int x)
{
    if(pre[x]==x)//如果编号等于自身
        return x;//返回编号
    else return pre[x]=Find(pre[x]);//路径合并，继续搜索
}
void mix(int x,int y)
{
    int fx=Find(x);//查找x的父节点
    int fy=Find(y);//查找y的父节点
    if(fx!=fy)//如果父节点不相同合并两颗树
        pre[fx]=fy;
}
int n,m;
int main()
{
        while(cin>>n){   //输入城镇数目 
                if(n==0)
                break;
                cin>>m;  //输入道路数目 
            for(int i=1;i<=n;i++)
            pre[i]=i;
            int a,b;
            for(int i=0;i<m;i++){
                cin>>a>>b; //输入该条道路直接连通的两个城镇的编号 
                mix(a,b);
            }
            int ans=0;
            for(int i=1;i<=n;i++){
                if(pre[i]==i){
                    ++ans;
                }
            }
            cout<<ans-1<<endl;
        }

    return 0;
}
