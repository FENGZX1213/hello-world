#include<stdio.h>
int main()

{
  int n,a[10],i;
  
int sum=0;
  
float ave;
  
for(i=0;i<10;i++)
  
{
    scanf("%d",&n);
    
	a[i]=n;
    
	sum=sum+n;
  }
	ave=sum/10;
  
	for(i=0;i<10;i++)
  
{
    
	if(a[i]<ave)
    
{
      printf("%d ",a[i]);
    
}
  
}
  return 0;

}