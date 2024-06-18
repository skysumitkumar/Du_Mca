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
        ListNode* newListNode=new ListNode(val);
        head=newListNode;
        tail=newListNode;
        tail->next=head;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    newListNode->next=head;
    tail->next=newListNode;
    tail=newListNode;
}
void InsertAtHead(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        ListNode* newNode=new ListNode(val);
        head=newNode;
        tail=newNode;
        tail->next=head;
        return;
    }
    ListNode* newNode=new ListNode(val);
    newNode->next=head;
    tail->next=newNode;
    head=newNode;
}
void print(ListNode* &head)
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
    int v,k;
    cout<<"Enter the length of the list ";
    cin>>v;
    ListNode* head=NULL;
    ListNode* tail=head;
    while(v--)
    {
        cout<<" Enter the value of the linked list ";
        cin>>k;
        InsertAtTail(head,tail,k);
    }
    cout<<"currently our linked list is "<<endl;
    print(head);
    cout<<endl<<"Enter the no of nodes that you want to insert at head "<<endl;
    cin>>v;
    while(v--)
    {
        cout<<"Enter the no that you want to insert at begining ";
        cin>>k;
        InsertAtHead(head,tail,k);
    }
    cout<<endl<<"After inserting the node at begining the new linked list is "<<endl;
    print(head);
    cout<<endl;
    return 0;
}
