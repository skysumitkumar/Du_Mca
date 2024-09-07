#include <stdio.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node node;
node *create();
void display(node *);
node * rev(node *);
main()
{
	node *ptr;
	ptr=create();
	display(ptr);
	ptr=rev(ptr);
	display(ptr);
}
node *create()
{
	node *tmp;
	node *head;
	int x;
	tmp=NULL;
	head=NULL;
	while (1)
	{
		printf("before read\n");
		scanf("%d",&x);
		if(x==0)
			break;
		else
		{
			tmp=(node *)malloc(sizeof(node));
			tmp->data= x;
			tmp->next=head;
			head=tmp;
			}
	}
	printf("out\n");
	return head;
}
void display(node *head)
{
	node *ptr;
	ptr= head;
	while(ptr !=NULL)
	{
		printf("%d\n",ptr->data);
		ptr= ptr->next;
	}
	return;
}
node * rev(node *head)
{
	node *head2,*ptr;
	head2=NULL;
	ptr= head;
	while(ptr !=NULL)
	{
		ptr = head->next;
		head->next=head2;
		head2=head;
		head=ptr;
	}
	printf("outside while\n");
	display(head2);
	printf("outside while\n");
	return head2;
}