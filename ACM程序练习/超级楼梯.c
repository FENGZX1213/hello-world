#include<stdio.h>
int main()
{
	int n;
	int fb[40]={1,1};
	int i;
	for(i=2;i<=40;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	scanf("%d", &n);
	while(n--)
	{
		  int m;
		  scanf("%d", &m);
		  printf("%d\n",fb[m-1]);
	}
	return 0;
}
