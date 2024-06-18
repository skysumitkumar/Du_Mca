#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode* prev;
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
int FindLength(ListNode* head)
{
    ListNode* temp=head;
    int len=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;

}
void deleteAtHead(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"we cant delete any this here no ListNode is present";
        return;
    }
    if(head->next==NULL)
    {
        ListNode* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    ListNode* temp=head;
    head=head->next;
    temp->next =NULL;
    head->prev=NULL;
    delete temp;
}
void deleteAtTail(ListNode* &head,ListNode* &tail)
{
    if(head==NULL)
    {
        cout<<"we cant delete any this here no ListNode is present";
        return;
    }
    ListNode* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
    delete temp;
}void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
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
void DeleteValuedNode(ListNode* &head,ListNode* &tail,int val)
{
    if(head==NULL)
    {
        cout<<"There is no node to delete ";
        return;
    }
    if(head->val==val)
    {
        deleteAtHead(head,tail);
        return;
    }
    if(tail->val==val)
    {
        deleteAtTail(head,tail);
        return;
    }
    ListNode* temp=head;
    ListNode* temp1;
    int len=FindLength(head);
    for(int i=0;i<len;i++)
    {
        if(temp->val==val)
        {
            temp1=temp->prev;
            temp1->next=temp->next;
            temp->next->prev=temp1;
            temp->prev=NULL;
            temp->next=NULL;
            delete temp;
            return;
        }
        temp=temp->next;
    }
    cout<<"There is no key of this value "<<endl;
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty firstly insert node ";
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
        cout<<"linked list is empty firstly insert the node ";
        return 0;
    }
    cout<<"Enter the value of nodes "<<endl;
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    cout<<"linked list is "<<endl;
    print(head);
    cout<<endl<<"Enter the key of node that you want to delete "<<endl;
    cin>>k;
    DeleteValuedNode(head,tail,k);
    cout<<"Linked list after deletion a key"<<endl;
    print(head);
    return 0;
}
