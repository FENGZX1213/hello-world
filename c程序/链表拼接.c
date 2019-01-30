#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
	
    return 0;
}
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
	struct ListNode *ptr1=list1,*ptr2=list2;
	struct ListNode *head=NULL,*tail=NULL,*ptr;
    int num[1000];
    int n=0;
	int i=0,j=0,t;
	while(ptr1!=NULL)
	{
		num[n]=ptr1->data;
		n++;
		ptr1=ptr1->next;
	  }
	  while(ptr2!=NULL)
	{
		num[n]=ptr2->data;
		n++;
		ptr2=ptr2->next;
	} 
	for(i=0;i<n-1;i++)
	{
	   for(j=0;j<n-1-i;j++)
	   {
	   	if(num[j]>num[j+1])
	   	{
	   	   t=num[j];
			num[j]=num[j+1];
			num[j+1]=t;	
		   }
		}	
	 }
	 for(i=0;i<n;i++)
	 {
	 	ptr = (struct ListNode  *)malloc(sizeof(struct ListNode));
	 	ptr->data=num[i];
	 	if(head==NULL)
	 	{
	 		head=ptr;
	 		head->next=NULL;
		}
		else tail->next=ptr;
		tail=ptr;
		tail->next=NULL;
	 }
    return head;
}
struct ListNode *createlist()
{
	struct ListNode *head=NULL,*tail=NULL,*str;
    str=(struct ListNode*)malloc(sizeof(struct ListNode));
	scanf("%d",&str->data);
		while(str->data!=-1){	
		if(head == NULL){
			head=str;
			head->next=NULL; 
		} 
		if(tail!=NULL)
		tail->next=str;
		tail=str;
		tail->next=NULL;
		str=(struct ListNode*)malloc(sizeof(struct ListNode));
		scanf("%d",&str->data);
	}
	return head;	
 } 
