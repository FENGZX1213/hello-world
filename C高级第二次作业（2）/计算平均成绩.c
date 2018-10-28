#include<stdio.h>
struct student{
	char num[5];
	char name[10];
	int grade;
}student1[10];
int main()
{
	int n,i;
	double aver=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%s %s %d",student1[i].num,student1[i].name,&student1[i].grade);
        sum=sum+student1[i].grade;
       	
	}aver=sum/n;
	printf("%.2f\n",aver);
	 for(i=0;i<n;i++)
    {
		if(student1[i].grade<aver)
		printf("%s %s\n",student1[i].name,student1[i].num);
	}
	return 0;
}
