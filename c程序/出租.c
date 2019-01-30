#include<stdio.h>
int main()
{
  char c[100];
  int index[100],arr[100],num[100];
  int i,j=0,k=0,flag=1,t=0;
  gets(c);
  printf("int[] arr = new int[]{");
  for(i=0;c[i]!='\0';i++)
  {
		 num[c[i]-'0']=1;
  } 
    for(i=9;i>=0;i--)
    {
		if(num[i]==1)
		{
			arr[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
	if(flag==1) flag=0;
	else printf(",");
	printf("%d",arr[i]);	
    }
    flag=1;
	printf("};\n");
	printf("int[] index = new int[]{");
	for(i=0;i<11;i++)
	{
		for(k=0;k<10;k++)
		{
			if(arr[k]==(c[i]-'0'))
			{
				index[i]=k;
				t++;
				break;
			}
		}
	}
	for(i=0;i<t;i++)
	{
	if(flag==1) flag=0;
	else printf(",");
	printf("%d",index[i]);
	}printf("};\n");
}
