#include<iostream>
using namespace std;
int main()
{
    int i,k;
for(i=1;i<=50;i++)
{
   if(i%2==0)
   {
       continue;
   }
   if(i==25)
   {
       break;
   }
cout <<i<<endl;
}
return 0;
}
