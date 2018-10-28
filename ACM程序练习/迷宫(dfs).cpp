/* 3 4 
S . . .
# # # .
D . . .*/
#include<iostream>
#include<algorithm>
using namespace std;
char maze[101][101];//��ͼ
bool mark[101][101];//����߹���·
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int sx,sy;//�������� 
int ex,ey;// �յ������
int n,m; 
bool flag=false;
void dfs(int x,int y)
{
	mark[x][y]=1;//��ǵ�ǰ��
	int i,j; 
	for(i=0;i<4;i++){
		int nx=x+dir[i][0];//��һ����ĺ�����
		int ny=y+dir[i][1];//��һ����������� 
		if(nx>=0&&nx<n&&ny>=0&&ny<m&&!mark[nx][ny]&&maze[nx][ny]!='#'){
			//�ж��Ƿ��ڵ�ͼ�ڣ��Ƿ��߹����Ƿ������
			if(nx==ex&&ny==ey){//�ж��Ƿ��ߵ��յ�
			   flag=true;
			   return; 	
		    }
		    dfs(nx,ny);//����һ������һ����ͬ������
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
