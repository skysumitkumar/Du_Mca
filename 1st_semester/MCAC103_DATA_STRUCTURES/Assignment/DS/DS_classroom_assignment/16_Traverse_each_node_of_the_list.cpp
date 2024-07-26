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
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"Here no linked list is present firstly make linked list"<<endl;
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
    cout<<"Enter the value of nodes ";
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    cout<<"The values in the linked list is "<<endl;
    print(head);
}