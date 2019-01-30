#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}
struct ListNode *readlist()
{
	struct ListNode *head=NULL,*tail=NULL,*str;
    str=(struct ListNode*)malloc(sizeof(struct ListNode));
	scanf("%d",&str->data);
	if(str->data==-1) return head;
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
struct ListNode *getodd( struct ListNode **L )
{
	struct ListNode *p1=*L,*p2=NULL,*head1=NULL,*str1=NULL,*head2=NULL;
	if(*L==NULL) return 0;
	while(p1!=NULL)
	{
		if(p1->data%2!=0)
		{
			if(head1==NULL)
				head1=p1;
			else
			   p2->next=p1;
			p2=p1;
			p1=p1->next;
		}
		else
		{
			if(head2==NULL)
			head2=p1;
			else
			str1->next=p1;
			str1=p1;
			p1=p1->next;
		}
	}
	if(p2!=NULL) 
	p2->next=NULL;
	if(str1!=NULL)
	str1->next=NULL;
	*L=head2;
	return head1;
}
