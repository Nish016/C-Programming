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

struct Node *insertBetween(struct Node *head, int data, int index)
{
    struct Node *p = head;
    struct Node * ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    while(i!= index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

struct Node *insertBegin(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while(p->next!= head)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = head;
    p->next = ptr;
    head = ptr;
    return head;
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

    cout<<"\n"<<"After insertion"<<"\n";
    head = insertBetween(head , 25, 2);
    traversal(head);

    cout<<"\n"<<"After inserting 7 in the beginning"<<"\n";
    head = insertBegin(head,7);
    head = insertBegin(head,4);
    traversal(head);
    return 0;
}
