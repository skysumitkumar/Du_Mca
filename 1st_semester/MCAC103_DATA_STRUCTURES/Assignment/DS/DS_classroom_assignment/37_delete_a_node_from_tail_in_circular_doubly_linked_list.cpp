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
        this->next=this;
        this->prev=this;
    }
    ~ListNode()
    {
        int val=this->val;
        if(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
    }
};
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
    newNode->next=head;
    newNode->prev=tail;
    head->prev=newNode;
    tail=newNode;
}
void DeleteAtTail(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"we cant delete any element linked list empty ";
        return;
    }
    if(head->next==head)
    {
        ListNode* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    ListNode* temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=head;
    head->prev=temp;
    tail->next=NULL;
    tail->prev=NULL;
    delete tail;
    tail=temp;
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty firstly insert node ";
        return;
    }
    ListNode* temp = head;
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
    while(v--)
    {
        cout<<"Enter the val of node ";
        cin>>k;
        InsertAtTail(head,tail,k);
    }
    print(head);
    cout<<endl;
    DeleteAtTail(head,tail);
    cout<<"After deletion the end node the linked list is "<<endl;
    print(head);
}
