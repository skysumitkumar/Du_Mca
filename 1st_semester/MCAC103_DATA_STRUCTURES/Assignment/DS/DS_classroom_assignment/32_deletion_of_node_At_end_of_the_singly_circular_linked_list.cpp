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
        int data=this->val;
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
        ListNode* newListNode=new ListNode(val);
        head=newListNode;
        tail=newListNode;
        tail->next=head;
        return;
    }
    ListNode* newListNode=new ListNode(val);
    tail->next=newListNode;
    newListNode->next=head;
    tail=newListNode;
}
void DeleteTail(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"linked list is empty currently ";
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
    tail->next=NULL;
    delete tail;
    tail=temp;
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
    cout<<"currently our linked list is ";
    print(head);
    if(head==NULL)
    {
        return 0;
    }
    cout<<endl<<"After deletion of end of list "<<endl;
    DeleteTail(head,tail);
    print(head);
    cout<<endl;
    return 0;
}
