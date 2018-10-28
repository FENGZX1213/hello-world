#include<stdio.h>
int main()
{
  int a[12]={1,1},i;
  for(i=2;i<12;i++)
  {
    a[i]=a[i-2]+a[i-1];
  }
  for(i=0;i<12;i++)
  {
    if((i+1)%3==0)
    {
      printf("%6d",a[i]);
	  printf("\n");
    }else
    {
    	printf("%6d",a[i]);
	}
  }
  return 0;
}