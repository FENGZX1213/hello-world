#include<stdio.h>
int main()
{
	int pulse,breath,i,n;
	char name;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%s %d %d",&name,&breath,&pulse);
        if(breath>20||breath<15||pulse<50||pulse>70)
        {
        	printf("%s",name);
		}
	}
}
