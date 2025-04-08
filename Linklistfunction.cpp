
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *current=NULL;
void createnode(int n)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        current=newnode;
        newnode=NULL;
    }
    else
    {
        current->next=newnode;
        current=newnode;
    }
}
void display()
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main ()
{
    createnode(10);
    createnode(15);
    createnode(20);
    createnode(30);
    createnode(50);
    display();
    return 0;
}
