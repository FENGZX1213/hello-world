#include<stdio.h>
struct{
	int start;
	int end;
}program[101];

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF&&n!=0){
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d %d",&program[i].start,&program[i].end);
		}
		for(i=0;i<n;i++){
			for(j=0;j<n-1-i;j++){
				if(program[j].end>program[j+1].end){
					program[100]=program[j];
					program[j]=program[j+1];
					program[j+1]=program[100];
				}
			}
		}
		int count=1;
		for(j=1,i=0;j<n;j++){
			if(program[i].end<=program[j].start){
				i=j;
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
 } 
