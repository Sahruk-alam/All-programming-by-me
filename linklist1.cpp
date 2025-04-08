#include<iostream>
using namespace std;
  struct Node{
        int data;
       struct Node *next;
    };

int main ()
{
struct Node *one=NULL;
struct Node *two=NULL;
struct Node *three=NULL;
one=(struct Node*)malloc(sizeof(struct Node));
two=(struct Node*)malloc(sizeof(struct Node));
three=(struct Node*)malloc(sizeof(struct Node));


    one->data=10;
    one->next=two;
    cout <<"One->data : "<<one->data<<endl;
    cout <<"One->next : "<<one->next<<endl;

    two->data=15;
    two->next=three;
    cout <<"Two->data : "<<two->data<<endl;
   cout <<"Two->next : "<<two->next<<endl;

    three->data=20;
    three->next=NULL;
    cout <<"Three->data : "<<three->data<<endl;
    cout <<"Three->next : "<<three->next<<endl;

    while(one!=NULL){
        cout<<one->data<<"  " ;
        one=one->next;

    }
    return 0;
}
