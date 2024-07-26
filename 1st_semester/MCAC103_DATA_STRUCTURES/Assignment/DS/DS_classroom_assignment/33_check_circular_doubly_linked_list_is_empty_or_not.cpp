#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int Findlength(ListNode* head)
{
    if(head==NULL)//this important case
    return 0;
    ListNode* temp=head;
    int i=1;
    while(temp->next!=head)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newNode= new ListNode(val);
        head=newNode;
        tail=newNode;
        tail->next=head;
        head->prev=tail;
        return;
    }
    ListNode* newNode=new ListNode(val);
    tail->next=newNode;
    newNode->prev=tail;
    newNode->next=head;
    head->prev=newNode;
    tail=newNode;
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty firstly insert node ";
        return;
    }
    ListNode* temp=head;
    cout<<temp->val<<" ";
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    int i,v,k;
    cout<<"Enter the length of linked list ";
    cin>>v;
    ListNode* head=NULL;
    ListNode* tail=head;
    while(v>0)
    {
        cout<<"Enter the val of node ";
        cin>>k;
        InsertAtTail(head,tail,k);
        v--;
    }
    if(Findlength(head)>0)
    {
        cout<<"List is not empty ";
    }
    else
    cout<<"List is empty ";
}
