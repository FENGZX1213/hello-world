#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}
struct stud_node *createlist()
{
	struct stud_node *head=NULL,*tail,*str=NULL;
    str=(struct stud_node*)malloc(sizeof(struct stud_node));
    scanf("%d",&str->num);
    if(str->num==0) return head;
	while(str->num!=0){
		scanf(" %s %d",str->name,&str->score);
		if(head == NULL)
			head=str;
		else
		tail->next=str;
		tail=str;	
		str=(struct stud_node*)malloc(sizeof(struct stud_node));
		scanf("%d",&str->num);
	}
	tail->next=NULL;
	return head;
}
struct stud_node *deletelist( struct stud_node *head, int min_score )
{
	struct stud_node *p1=NULL,*p2=head,*p=NULL;
	if(head==NULL) return head;
	while(p2!=NULL)
{	
	if(p2->score>=min_score)
	{
		
		if(p1==NULL)
			p1=p2;
		else
		p->next=p2;
		p=p2;	
	}
	else free(p2);
	p2=p2->next;
			 
}   
    if(p!=NULL)
    p->next=NULL;
	return p1;
}
