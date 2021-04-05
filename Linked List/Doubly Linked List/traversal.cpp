#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node * next;
};

void traverseForward(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element: "<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}

void traverseBackward(struct Node *head)
{
    struct Node *q = head;
    struct Node* p = head;

    while(q->next!=NULL)
    {
        q=q->next;
    }
    cout<<"Element:"<<q->data<<"\n";
    while(q->prev!=p->prev)
    {
        q=q->prev;
        cout<<"Element:"<<q->data<<"\n";
    }

}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));


    head -> data = 14;
    head ->prev = NULL;
    head -> next = first;

    first -> data = 21;
    first -> prev = head;
    first -> next = second;

    second -> data = 28;
    second -> prev = first;
    second -> next = third;

    third -> data = 35;
    third ->prev = second;
    third -> next = NULL;

    cout<<"While transversing forward:"<<"\n";
    traverseForward(head);

    cout<<"\n"<<"While transversing backwards:"<<"\n";
    traverseBackward(head);

    return 0;

}
