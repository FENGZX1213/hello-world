#include <stdio.h>
int prime(int x);
int main()
{
int i,k=0;
for(i=1;i<=100;i++)
    if(prime(i)==1)
      {printf("%4d",i);
       k++;
       if(k%10==0) printf("\n");
      }
printf("\n%4d\n",k);
return 0;
}
int prime(int  x)
{
	int k;
	if(x==1) return 0;
	for(k=2;k<x;k++)
	{
      if(x%k==0) break;
    }
    if(k>x/2) return 1;
    else return 0;
} 
