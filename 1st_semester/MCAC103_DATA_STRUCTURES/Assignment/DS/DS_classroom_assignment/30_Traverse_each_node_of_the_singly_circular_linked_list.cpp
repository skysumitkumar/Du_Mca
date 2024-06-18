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
    cout<<"The linked list is "<<endl;
    print(head);
    cout<<endl;
    return 0;
}
