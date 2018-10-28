/* 3 4 
S . . .
# # # .
D . . .*/
#include<iostream>
#include<algorithm>
using namespace std;
char maze[101][101];//地图
bool mark[101][101];//标记走过的路
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int sx,sy;//起点的坐标 
int ex,ey;// 终点的坐标
int n,m; 
bool flag=false;
void dfs(int x,int y)
{
	mark[x][y]=1;//标记当前点
	int i,j; 
	for(i=0;i<4;i++){
		int nx=x+dir[i][0];//下一个点的横坐标
		int ny=y+dir[i][1];//下一个点的纵坐标 
		if(nx>=0&&nx<n&&ny>=0&&ny<m&&!mark[nx][ny]&&maze[nx][ny]!='#'){
			//判断是否在地图内，是否走过，是否可以走
			if(nx==ex&&ny==ey){//判断是否走到终点
			   flag=true;
			   return; 	
		    }
		    dfs(nx,ny);//对下一个点做一次相同的运算
			mark[nx][ny]=0; 
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>maze[i][j];
			if(maze[i][j]=='S'){
				sx=i;
				sy=j;
			}
			if(maze[i][j]=='D'){
				ex=i;
				ey=j;
			}
		}
	}
	dfs(sx,sy);
	if(flag)
		cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	return 0;
 } 
