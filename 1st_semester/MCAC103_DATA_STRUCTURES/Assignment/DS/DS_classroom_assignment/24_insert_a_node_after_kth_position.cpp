#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode()
    {
        this->val=0;
        this->next=NULL;
        this->prev=NULL;
    }
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int findLength(ListNode* &head)
{
    ListNode* temp=head;
    int i=0;
    while(temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
void InsertAtHead(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newListNode= new ListNode(val);
        head=newListNode;
        tail=newListNode;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    newListNode->next=head;
    head->prev=newListNode;
    head=newListNode;
}
void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newListNode= new ListNode(val);
        head=newListNode;
        tail=newListNode;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    tail->next=newListNode;
    newListNode->prev=tail;
    tail=newListNode;
}
void InsertAtPosition(ListNode* &head,ListNode* &tail,int val,int k)
{
    if(head==NULL)
    {
        ListNode* newListNode=new ListNode(val);
        head=newListNode;
        tail=newListNode;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    ListNode* temp=head;
    if(k<=0)
    {
        InsertAtHead(head,tail,val);
        return;
    }
    int len=findLength(head);
    if(k>=len)
    {
        InsertAtTail(head,tail,val);
        return;
    }
    while(k!=1)
    {
        temp=temp->next;
        k--;
    }
    newListNode->next=temp->next;
    newListNode->prev=temp;
    temp->next->prev=newListNode;
    temp->next=newListNode;
}

void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty firstly insert a node "<<endl;
        return;
    }
    ListNode* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    int n,v,k;
    cout<<"Enter the length of LinkedList ";
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=head;
    if(n==0)
    {
        cout<<"There is no node in the linked list ";
        return 0;
    }
    cout<<"Enter the value of first node ";
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    cout<<"Enter the value of k ";
    cin>>k;
    cout<<endl<<"Enter the value that you want to insert ";
    cin>>v;
    InsertAtPosition(head,tail,v,k);
    print(head);
}
