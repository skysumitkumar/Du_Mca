#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode()
    {
        this->val=0;
        this->next=NULL;
    }
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
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
ListNode* ReverseUsingRecursion(ListNode* &prev,ListNode* &curr)
{
    if(curr==NULL)
    {
        return prev;
    }
    ListNode* Forward=curr->next;
    curr->next=prev;
    return ReverseUsingRecursion(curr,Forward);
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty firstly insert node"<<endl;
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
   int n,v;
    cout<<"Enter the length of LinkedList "<<endl;
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=head;
    if(n==0)
    {
        cout<<"Firstly insert nodes ";
        return 0;
    }
    cout<<"Enter the value of first node "<<endl;
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* newhead=ReverseUsingRecursion(prev,curr);
    cout<<endl<<"Linked list after revers "<<endl;
    print(newhead);
}
