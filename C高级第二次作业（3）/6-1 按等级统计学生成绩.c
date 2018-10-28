#include <stdio.h>
#define MAXN 10

struct student{
    int num;
    char name[20];
    int score;
    char grade;
};

int set_grade( struct student *p, int n );

int main()
{   struct student stu[MAXN], *ptr;
    int n, i, count;

    ptr = stu;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
       scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
    } 
   count = set_grade(ptr, n);
   printf("The count for failed (<60): %d\n", count);
   printf("The grades:\n"); 
   for(i = 0; i < n; i++)
       printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
    return 0;
}
int set_grade( struct student *p, int n )
{
	int k,count=0;
	for(k=0;k<n;k++)
	{
			if(p[k].score>=85&&p[k].score<=100) p[k].grade='A';
			else if(p[k].score>=70&&p[k].score<=84) p[k].grade='B';
			else if(p[k].score>=60&&p[k].score<=69) p[k].grade='C';
			else 
			{
				p[k].grade='D';
				count++;
			}	
	} 
	return count;
} 
