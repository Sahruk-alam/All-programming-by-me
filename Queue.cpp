#include<iostream>
using namespace std;
#define SIZE 5
class queue {
    int arr[SIZE];
    int f=-1,r=-1;
public:

 void enqueue(int value){
    if(r==SIZE-1){
       cout<<"Overflow"<<endl; 
    }
    else{
        if(f==-1)
        f=0;
        r++;
        arr[r]=value;
        cout<<"Add queue : "<<value<<endl;
    }
 }
 void dequeue(){
    if(f==-1 || f>r){
        cout<<"Underflow "<<endl;
    }
    else{
        cout<<"Remove data : "<<arr[f]<<endl;
        f++;
    }
 }
  void display() {
        if (f == -1 || f > r) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = f; i <= r; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main(){
queue obj;
obj.dequeue();
obj.display();
obj.enqueue(10);
obj.enqueue(15);
obj.enqueue(20);
obj.enqueue(25);
obj.enqueue(26);
obj.enqueue(28);
obj.display();
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.display();
    return 0;
}