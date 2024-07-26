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
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"There is no element in the linked list ";
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
    cout<<"Enter the length of LinkedList ";
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=head;
    cout<<"Enter the value of first node ";
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    cout<<"print the forward traverse "<<endl;
    print(head);
}
