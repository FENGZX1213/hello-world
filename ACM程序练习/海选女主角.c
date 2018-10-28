#include<stdio.h>
#include<math.h>
int main()
{
	int n, m;
	int a[100][100]={0};
	while(scanf("%d %d", &m, &n)!=EOF)
	{
		int i,j;
		int score=0;
		int row=0,line=0;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				scanf("%d", &a[i][j]);
				if(abs(score)<abs(a[i][j])){
					score=a[i][j];
					row=i;
					line=j;
				}
			}
		}
		printf("%d %d %d\n",row,line,score);
	}
	return 0;
 } 
