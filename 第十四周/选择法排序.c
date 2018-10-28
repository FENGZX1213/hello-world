#include<stdio.h>
int main()
{
  int n,i,k,x,j;
  scanf("%d\n",&n); 
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }for(i=0;i<(n-1);i++)
  {
    k=i;
    for(j=i+1;j<n;j++)
    if(a[j]>a[k])
    {
      k=j;
    }
    if(i!=k)
    {
      x=a[i];a[i]=a[k];a[k]=x;
    }
}
    for(i=0;i<n;i++)
  {
    if(i==0)
    {
      printf("%d",a[i]);
    }else printf(" %d",a[i]);
  }
}