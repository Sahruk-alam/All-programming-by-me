#include<iostream>
using namespace std;
typedef struct testy{
int x,y;
float n;

}ob;
int main(){
 testy *obj=new testy;
  //struct testy obj;
 // ob *obj;
 obj->x=9;
 obj->y=7;
 int result=obj->x+obj->y;
 cout<<"Summation = "<<result;

    return 0;
}

