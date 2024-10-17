#include<iostream>
#include<stdio.h>

using namespace std;

//class
template<class T>
class linklist
{
    private:
        struct Node
        {
           T key;
           struct Node* next;
        };
        

    public:
        typedef Node* Nodeptr;
        linklist();
        ~linklist();
        void insert(T);
        void print();
};



//constructor
template <class T>
linklist<T>::linklist()
{
    Nodeptr = NULL;
}

//destructor
template <class T>
linklist<T>::~linklist()
{
    Node *temp;
    while(Nodeptr);
    {
        temp = Nodeptr;
        Nodeptr = Nodeptr->next;
        delete temp;
    }
}

//insert
template <class T>
void linklist<T>::insert(T data)
{
    Node *newnode = new Node();
    Node *temp;
    temp = Nodeptr;
    
    while(temp)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->key = data;
    newnode->next = NULL;
}

//printing

template <class T>
void linklist<T>::print()
{
    Node *temp;
    temp = Nodeptr;
        
    while(temp)
    {
        cout<<temp->key;
    }
}


int main()
{
    linklist<int> obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.insert(5);
    obj.insert(6);
    obj.insert(7);
    obj.insert(8);
    
    obj.print();
    getchar();
    return 0;
}
