#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,t;
	int a,b,c;
	int s;
	int flag1,flag2;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		flag1=0;
		flag2=1;
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		else
		{
			int i;
			for(i=m;i<=n;i++)
			{
				a=i/100;
				b=i/10%10;
				c=i%10;
				s=pow(a,3)+pow(b,3)+pow(c,3);
				if(s==i)
				{
					if(flag1!=0)
						printf(" ");
				printf("%d",i);
				flag1++;
				flag2++;	
				}
			}
		}
		if(flag2==1)
			printf("no\n");
		else printf("\n");
	}
 } 
