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
        this->next=NULL;
        this->prev=NULL;
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
    newNode->prev=tail;
    newNode->next=head;
    head->prev=newNode;
    tail=newNode;
}
void print(ListNode* head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty firstly insert node ";
        return;
    }
    ListNode* temp = head;
    do
    {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
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
    
}
