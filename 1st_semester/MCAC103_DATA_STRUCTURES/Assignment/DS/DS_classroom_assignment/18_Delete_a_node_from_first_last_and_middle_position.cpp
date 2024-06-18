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
    ~ListNode()
    {
        int val=this->val;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
int FindLength(ListNode* &head)
{
    ListNode* temp=head;
    int len=1;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void deleteHead(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"There is no ListNode here to delete here id NULL"<<endl;
        return;
    }
    ListNode* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
void deleteTail(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"There is no ListNode here to delete here id NULL"<<endl;
        return;
    }
    ListNode* temp=head;
    int len=FindLength(head);
    int i=1;
    while(i<len-1)
    {
        temp=temp->next;
        i++;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}
ListNode* findMiddle(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head->next;
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
void deleteMiddle(ListNode* &head)
{
    if(head==NULL)
    {
        cout<<"There is no node present here "<<endl;
        return;
    }
    ListNode* Middle=findMiddle(head);
    ListNode* temp=Middle->next;
    Middle->next=temp->next;
    temp->next=NULL;
    delete temp;
}

void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newListNode=new ListNode(val);
        head=newListNode;
        tail=newListNode;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    tail->next=newListNode;
    tail=newListNode;
}
void print(ListNode*  &head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty firtly insert node "<<endl;
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
    int switchval;
    cout<<"Enter 1 if you want to delete node at the head "<<endl;
    cout<<"Enter 2 if you want to delete node at the tail "<<endl;
    cout<<"Enter 3 if you want to delete node at the middle "<<endl;
    cin>>switchval;
    switch(switchval)
    {
    case 1:
    deleteHead(head,tail);
    break;
    case 2:
    deleteTail(head,tail);
    break;
    case 3:
    deleteMiddle(head);
    break;
    }
    cout<<"After deletion linked list is"<<endl;
    print(head);
    return 0;
}
