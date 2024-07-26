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
        this->next=this;
    }
};
int FindLength(ListNode* head)
{
    ListNode* temp=head;
    if(temp==NULL)
    {
        return 0;
    }
    int i=1;
    while(temp->next!=head)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
void InsertAtTail(ListNode* &head,ListNode* &tail,int val)
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
    tail->next=newNode;
    newNode->next=head;
    tail=newNode;
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
    int len=FindLength(head);
    cout<<len<<endl;
   cout<<"Number of nodes in this linked list is ";
   cout<<len;
}