#include<iostream>
#include<stdio.h>

using namespace std;

struct Node
{
    int key;
    struct Node* next;
};

typedef Node* Nodeptr;
        

//insert complete
void insert(Nodeptr& head,int data)
{
    Nodeptr temp = head;
    Nodeptr newnode = new Node();
    newnode->key = data;
    newnode->next = NULL;
    
    if(!temp)
        head = newnode;
    else
    {
        while(temp->next)
           temp = temp->next;

    temp->next = newnode;
    }
}

//print complete
void print(Nodeptr head)
{
    while(head)
    {
        cout<<head->key<<"  ";
        head = head ->next;
    }
    cout<<endl;
}

//count complete
int count(Nodeptr head)
{
    int count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }
    return count;    
}

//reverse print complete
void reversePrint_rec(Nodeptr head)
{
    if(!head)
        return ;
    else
    {
        reversePrint_rec(head->next);
        cout<<head->key<<"  ";
    }
    
}

void sortedInsert(Nodeptr &head, int data)
{
    Nodeptr temp =  new Node();
    temp->key = data;
    if(!head)
    {
        head = temp;
        temp->next = NULL;
    }

    else if(data < head->key)
    {
        temp->next = head;
        head = temp;
    }
    else 
    {
        while(head->next)
        {
           if(head->next->key > data)
           {
              temp =  head->next;
              head->next = temp;
           }
        }
    }   
}


void split(Nodeptr head,Nodeptr& ptr)
{
    if(!head)
       return ;
    ptr=head->next;
    if(!ptr)
        return;
    head->next=ptr->next;
    split(head->next,ptr->next);
}


//reverse complete
void reverse(Nodeptr &head)
{
    if(!head)
        return ;
    Nodeptr previous = NULL, middle,front;
    middle = head;
    front = head->next;

   while(front)
   {
        middle->next = previous;
        previous = middle;
        middle = front;
        front = front->next;
   }
   middle->next = previous;
   head = middle;

/*
    while(1)
    {
        middle->next = previous;
        if(!front)
           break;
        previous = middle;
        middle = front;
        front = front->next;
    }
    head = middle;
        
*/  
   
/*
    while(front)
    {
        head = front;
        middle->next = previous;
        previous = middle;
        middle = front;
        front = front->next;
    }
    head->next = previous;
*/

    print(head);    

}

Nodeptr recursiveReverse(Nodeptr head,Nodeptr prev=NULL)
{
    if(!head)
        return prev;
    Nodeptr temp=head->next;
    head->next=prev;
    recursiveReverse(temp,head);
}


int main()
{
    Nodeptr head1 = NULL;
    Nodeptr head2 = NULL;
 
    insert(head1,1);
    insert(head1,3);
    insert(head1,7);
    insert(head1,9);
    insert(head1,10);
 
    

    print(head1);
    head1=recursiveReverse(head1);
    print(head1);
//    print(head2);
/*      
    insert(head2,2);
    insert(head2,4);
    insert(head2,6);
    insert(head2,8);
    insert(head2,10);

    print(head2);
*/      
//  reverse(head1);
  
    getchar();
    return 0;
}
