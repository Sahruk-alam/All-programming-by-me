
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* create_array(int arr[],int Size){
      struct Node *head,*temp,*current;
      for(int i=1;i<Size;i++){
            temp=(struct Node*)malloc(sizeof(struct Node));

        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
      }

}
int main()
{   int a[]={5,9,8,5,2};
   struct Node* create_array(a,5);
    struct Node *current;
    while(current!=NULL)
    {
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL";
    return 0;
}
