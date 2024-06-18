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
    ~ListNode()
    {
        delete next;
    }
};
void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newHead=new ListNode(val);
        head=newHead;
        tail=newHead;
        return;
    }
    ListNode* newHead=new ListNode(val);
    tail->next=newHead;
    tail=newHead;
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty there is no node present here firstly make node ";
        return;
    }
    ListNode* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
ListNode* sortlinkedlist(ListNode* &head)
{
    ListNode* newHead=head;
    ListNode* newTail=head;
    head=head->next;
    newTail->next=NULL;
    ListNode* temp=head;
    // ListNode* newHead=new ListNode(-1);
    // ListNode* newTail=newHead;
    // ListNode* temp=head;
    // head=head->next;
    // temp->next=NULL;
    // newTail->next=temp;
    // temp=newHead;
    // newTail=newTail->next;
    // newHead=newHead->next;
    // temp->next=NULL;
    // delete temp;
    // temp=head;
    while(temp!=NULL)
    {
        if(temp->val<=newHead->val)
        {
            head=head->next;
            temp->next=NULL;
            temp->next=newHead;
            newHead=temp;
            temp=head;
            continue;
        }
        if(temp->val>=newTail->val)
        {
            head=head->next;
            temp->next=NULL;
            newTail->next=temp;
            newTail=temp;
            temp=head;
            continue;
        }
        if(temp->val>newHead->val&&temp->val<newTail->val)
        {
            ListNode* temp1=newHead;
            head=head->next;
            temp->next=NULL;
            while(temp1->next->val<temp->val)
            {
                temp1=temp1->next;
            }
            temp->next=temp1->next;
            temp1->next=temp;
            temp=head;
        }
    }
    return newHead;
}
int main()
{
    int l,v;
    cout<<"Enter  the length of linkedlist ";
    cin>>l;
    if(l==0)
    {
        cout<<"Firstly insert the node ";
        return 0;
    }
    cout<<endl;
    ListNode* head=NULL;
    ListNode* tail=head;
    cout<<"Enter the value of nodes "<<endl;
    while(l--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    cout<<"Entered linked list is "<<endl;
    print(head);
    ListNode* newHead=sortlinkedlist(head);
    cout<<endl<<"Linked list after sort list "<<endl;
    print(newHead);
}