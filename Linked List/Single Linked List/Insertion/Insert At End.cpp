#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
   int data;
   struct Node * next;
};

//Traversing the list

void traverse(struct Node * ptr)
{
    while(ptr!= NULL)
    {
        cout<<"Element: "<<ptr->data<<"\n";
        ptr = ptr->next;
    }
}

//Inserting a node in the beginning

struct Node * insertBegin(struct Node *head , int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = head;
    head = ptr;
}

//Inserting a node in between

struct Node * insertAtIndex(struct Node *head , int data , int index)
{
     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
     struct Node * p = head;
     int i=0;

     while(i!=index-1)
     {
         p=p->next;
         i++;
     }
     ptr->data = data;
     ptr->next = p->next;
     p->next = ptr;
     return head;
}
struct Node * insertAtLast(struct Node *head , int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;

    while(p->next!= NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct Node * head;     //Declaring the nodes
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));      //Allocating memory to the nodes
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 14;
    head -> next = second;

    second -> data = 21;
    second -> next = third;

    third -> data = 28;
    third -> next = NULL;

    cout<<"Linked List before insertion"<<"\n"; //Calling function and printing
    traverse(head);

    head = insertBegin(head,7);
    cout<<"\n"<<"Linked List after inserting 7 at the start"<<"\n";
    traverse(head);

    head = insertAtIndex(head,25,3);
    cout<<"\n"<<"Linked List after inserting 25 at index 3"<<"\n";
    traverse(head);

    head = insertAtLast(head,35);
    cout<<"\n"<<"Linked List after inserting 35 at the end"<<"\n";
    traverse(head);
    return 0;
}
