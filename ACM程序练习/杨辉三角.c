#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[30][30]={0};
		int i,j;
		for(i=0;i<n;i++){
			a[i][0]=1;
		}
			for(i=1;i<n;i++){
				for(j=1;j<=i;j++){
					a[i][j]=a[i-1][j-1]+a[i-1][j]; 
				}
			}
			for(i=0;i<n;i++){
				for(j=0;j<=i;j++){
					if(j==0){
					   printf("%d",a[i][j]);
					}
					else 
					   printf(" %d",a[i][j]);	 
				}
				printf("\n");
			}
			printf("\n");
		}
	return 0;
}
