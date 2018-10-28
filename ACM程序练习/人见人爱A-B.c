#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a, const void * b) //从小到大排序
{
    return *(int *)a - *(int *)b;
} 
int main()
{
	int n,m;
	while(scanf("%d %d", &n,&m)!=EOF)
	{
		if(n==0){
			if(m==0) break;
		}
		int a[100]={0};
	    int b[100]={0};
	    int i,j;
	    for(i=0;i<n;i++){
	    	scanf("%d", &a[i]);
		}
		for(j=0;j<m;j++){
			scanf("%d", &b[j]);
		}
		qsort(a, n, sizeof(int), cmp);
        qsort(b, m, sizeof(int), cmp);
		int flag=0; 
	    for(i=0;i<n;i++)
         {
            if(bsearch(a+i,b,m,sizeof(int),cmp)==0){
               flag=1;
			   printf("%d ",a[i]);
			}
         }
        printf(flag==0 ? "NULL\n" : "\n");//flag=0为空集，非0输出换行   
    }
	return 0;
}
