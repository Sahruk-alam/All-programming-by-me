
#include<iostream>

using namespace std;
void display (int num[], int size)
{

    for (int i=0;i<=3;i++)
    {
        cout <<num[i]<<endl;
    }
}
int main()
{
   int number[6]={10,20,30,40,50,60};
  display(number ,6);
    return 0;
}
