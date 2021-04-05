#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void Traverse(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element is: "<<ptr->data<<"\n";
        ptr = ptr->next;
    }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 14;
    second -> next = third;

    third -> data = 21;
    third -> next = fourth;

    fourth ->data = 28;
    fourth -> next = fifth;

    fifth -> data = 35;
    fifth -> next = NULL;

    Traverse(head);
    return 0;
}
