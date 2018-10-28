#include<stdio.h>
int main()
{
	int AH,AM,AS,BH,BM,BS;
	int N;
	int H,M,S;
	scanf("%d", &N);
	while(N--){
		scanf("%d %d %d %d %d %d",&AH,&AM,&AS,&BH,&BM,&BS);
		H=AH+BH;
		M=AM+BM;
		S=AS+BS;
		if(S>=60){
			M=M+S/60;
			S=S%60;
		}
		if(M>=60){
			H=H+M/60;
			M=M%60;
		}
		printf("%d %d %d\n",H,M,S);
	}
 } 
