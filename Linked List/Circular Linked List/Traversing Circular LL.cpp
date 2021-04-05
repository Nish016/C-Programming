#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void traversal(struct Node *head)
{
    struct Node *p = head;
    cout<<"Element: "<<p->data<<"\n";
    p=p->next;
    while(p!=head)
    {
        cout<<"Element: "<<p->data<<"\n";
        p=p->next;
    }

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 14;
    head -> next = second;

    second -> data = 21;
    second -> next = third;

    third -> data = 28;
    third -> next = head;

    cout<<"Before Insertion:"<<"\n";
    traversal(head);

    return 0;
}
