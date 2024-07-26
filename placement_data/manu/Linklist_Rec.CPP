#include<iostream>
using namespace std;



struct Node
{
    int key;
    struct Node* next;
    Node()
    {
        next = NULL;
    }
};

typedef Node* Nodeptr;


//create link list
void createList(Nodeptr& head,int data)
{
    if(!head)
    {
       Nodeptr newNode = new Node();
       newNode->key=data;
       head = newNode;
    }
    else
       createList(head->next,data);
}


//print link list
void print(const Nodeptr head)
{
    if(!head)
    {
       cout<<"NULL";
       return;
    }
    cout<<head->key<<"->";
    print(head->next);
}


//count nodes
int count(const Nodeptr head)
{
    if(!head)
       return 0;
    return (1+count(head->next));
}



//searching a particular value
void search(const Nodeptr head, int searchFor,int count=0)
{
    if(head)
    {
        count++;
        if(head->key==searchFor)
        {
	        cout<<"Number present at node no :"<<count<<endl;
        }
        search(head->next,searchFor,count);
    }
}


//delete node for given key
void deleteNode(Nodeptr& head,int value)
{
    if(head&&value==head->key)
    {
        Nodeptr temp = head;
        head = head->next;
        delete temp;
    }
    if(head)
        deleteNode(head->next,value);
}


//freeing list
void freeList(Nodeptr& head)
{
   if(!head)
       return;
   else
   {
       Nodeptr temp = head;
       head = head->next;
       delete temp;
       freeList(head);
   }
}



//reverse print
void reversePrint(Nodeptr head)
{
    if(!head)
        return ;
    else
        reversePrint(head->next);
    
    cout<<head->key<<"  ";
}


//splinting into two parts
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


//finding middle
Nodeptr middle(Nodeptr head,Nodeptr temp)
{
    if(!head || (!head->next) ||(!head->next->next))
        return temp;
    else
        return (middle(head->next->next,temp->next));    
    
}

//reversing the list
Nodeptr reverse(Nodeptr head,Nodeptr prev = NULL)
{
    if(!head)
        return prev;
    Nodeptr temp=head->next;
    head->next=prev;
    
    return(reverse(temp,head));
}


//reverse using single pointer
Nodeptr reverseOnePointer(Nodeptr head)
{
    if(!head || !head->next)
        return head;

    Nodeptr temp = reverseOnePointer(head->next);
    head->next->next = head;
    head->next=NULL;
    return temp;
}




int main()
{
    Nodeptr head = NULL;
    Nodeptr head1;
    Nodeptr head2 = NULL;   
    while(1)
    {

        cout<<"\n\t\tMENU\n";
        cout<<"0 : To exit.\n";
        cout<<"1 : To create a linear link list.\n";
        cout<<"2 : To print the list.\n";
        cout<<"3 : To count the number of nodes in the list.\n";
        cout<<"4 : To search for a number in the list.\n";
        cout<<"5 : To delete a node from the list:\n";
        cout<<"6 : To free all the nodes.\n";
        cout<<"7 : To Print in reverse order.\n";
        cout<<"8:  To Split list.\n";
        cout<<"9 : To find Middle node of link list.\n";
        cout<<"10:  To Reverse list.\n";
        cout<<"11:  To Reverse list( Implemented using single pointer).\n";                          
        int choice,index,data;
        cin>>choice;
        if(choice==0)
            break;
        switch(choice)
        {
            case 1:
                    while(1)
                    {
                       cout<<"Enter the value(-1) to stop:";
                       cin>>data;
                       if(data==-1)
                          break;
                       createList(head,data);
    		       }
    	           print(head);    		       
                   break;
     	  case 2:
    	           print(head);
    	           break;
    	  case 3:
                   cout<<"\nThe number of nodes in the list is:"<<count(head)<<"\n";
    		       break;

    	  case 4:
                   cout<<"Enter the number to search for:";
                   cin>>data;
                   search(head,data);
                   break;

    	  case 5:
     	           cout<<"Enter the value:";
                   cin>>data;
                   deleteNode(head,data);
                   print(head);
                   break;
	      case 6:
    	           freeList(head);
	               print(head);
                   break;
	      case 7:
                   reversePrint(head);
                   break;
	      case 8: 
                   split(head,head2);
                   print(head);
                   cout<<endl;
                   print(head2);
                   break;
	      case 9: 
	               if(middle(head,head))
                       cout<<"Middle node is "<<middle(head,head)->key;
                   break;
	      case 10: 
                   head = reverse(head);
                   break;                   
	      case 11: 
                   head = reverseOnePointer(head);
	             //  head->next = NULL;
	            //   head = head1;
                   break;                   
	      default:
	               cout<<"Enter valid choice.";

       }
       cout<<"\n\n\n";
       getchar();
    }
    return 0;
}

