#include<stdio.h>
struct person{
	char name[100];
	float w;
	float w1;
	float account;
}person1;
int main()
{

	int n,i;
	float pay;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f %f %f",&person1.name,&person1.w,&person1.w1,&person1.account);
		pay=person1.w+person1.w1-person1.account;
		printf("%s %.2f\n",person1.name,pay);
	}
	return 0;
}
