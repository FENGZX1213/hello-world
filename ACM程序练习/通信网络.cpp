#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> v[1024];//存边 
int isconnect[1024][1024];//存发送的信息
void dfs(int u,int visit[],int cur){
	visit[u]=1;//标记访问过的点 
	isconnect[u][cur]=isconnect[cur][u]=1;//互相知道 
	for(int i=0;i<v[u].size();++i){
		if(!visit[v[u][i]])//如果这个部门没有访问过
		   dfs(v[u][i],visit,cur);//从这个部门搜索 
	}
}
int s,e;
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++){
		
		cin>>s>>e;
		v[s].push_back(e);//存边	 
	}
	for(int i=1;i<=n;i++){
		int visit[1024]={0};
		dfs(i,visit,i);
	}
	int total=0;
	for(int i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++){
			if(isconnect[i][j]==0){
				break;
			}
		}
		if(j==n+1)
		++total;
	}
	cout<<total<<endl;
	return 0;
}
