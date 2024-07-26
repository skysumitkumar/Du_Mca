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
            delete next;
            this->next=NULL;
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
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"linked is empty firsly insert node than print "<<endl;
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
    cout<<"Enter the value of nodes ";
    while(n--)
    {
        cin>>v;
        InsertAtTail(head,tail,v);
    }
    print(head);
    cout<<endl<<"After delete the last node the linked list is "<<endl;
    deleteAtTail(head,tail);
    print(head);
}
