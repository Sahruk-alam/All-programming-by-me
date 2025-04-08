#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *a,*b,*c;
    // struct Node *b;
    // struct Node *c;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    a->data=5;
    b->data=10;
    c->data=15;
    a->next=b;
    b->next=c;
    c->next=NULL;
    while(a!=NULL)
    {
        cout<<a->data<<"->";
        a=a->next;
    }
    cout<<"NULL";
    return 0;
}
