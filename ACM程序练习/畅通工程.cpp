#include<iostream>
using namespace std;
int pre[1000];//1000���ڵ�
int Find(int x)
{
    if(pre[x]==x)//�����ŵ�������
        return x;//���ر��
    else return pre[x]=Find(pre[x]);//·���ϲ�����������
}
void mix(int x,int y)
{
    int fx=Find(x);//����x�ĸ��ڵ�
    int fy=Find(y);//����y�ĸ��ڵ�
    if(fx!=fy)//������ڵ㲻��ͬ�ϲ�������
        pre[fx]=fy;
}
int n,m;
int main()
{
        while(cin>>n){   //���������Ŀ 
                if(n==0)
                break;
                cin>>m;  //�����·��Ŀ 
            for(int i=1;i<=n;i++)
            pre[i]=i;
            int a,b;
            for(int i=0;i<m;i++){
                cin>>a>>b; //���������·ֱ����ͨ����������ı�� 
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
