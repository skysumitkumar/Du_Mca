#include<iostream>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void InsertAtHead(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newNode=new ListNode(val);
        head=newNode;
        tail=newNode;
        return;
    }
    ListNode* newNode=new ListNode(val);
    newNode->next=head;
    head=newNode;
}
void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newNode=new ListNode(val);
        head=newNode;
        tail=newNode;
        return;
    }
    ListNode* newNode=new ListNode(val);
    tail->next=newNode;
    tail=newNode;
}
int FindLength(ListNode* head)
{
    ListNode* temp=head;
    int s=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        s++;
    }
    return s;
}
ListNode* findMiddle(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
void InsertAtMiddle(ListNode* &head,ListNode* & tail,int val)
{
    if(head==NULL)
    {
        ListNode* newNode=new ListNode(val);
        head=newNode;
        tail=newNode;
        return;
    }
    ListNode* middle=findMiddle(head);
    ListNode* newNode=new ListNode(val);
    newNode->next=middle->next;
    middle->next=newNode;
}
void print(ListNode* &head)
{
    ListNode* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    int n,v;
    cout<<"Enter the length of LinkedList ";
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=head;
    cout<<"Enter the value of nodes ";
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    int switchval;
    cout<<"Enter 1 if you want to insert node at the head "<<endl;
    cout<<"Enter 2 if you want to insert node at the tail "<<endl;
    cout<<"Enter 3 if you want to insert node at the middle "<<endl;
    cin>>switchval;
    switch(switchval)
    {
    case 1:
    cout<<"Enter the val of node ";
    cin>>v;
    InsertAtHead(head,tail,v);
    break;
    case 2:
    cout<<"Enter the val of node ";
    cin>>v;
    InsertAtTail(head,tail,v);
    break;
    case 3:
    cout<<"Enter the val of node ";
    cin>>v;
    InsertAtMiddle(head,tail,v);
    break;
    }
    print(head);
}