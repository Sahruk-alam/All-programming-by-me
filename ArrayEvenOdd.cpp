#include<iostream>

using namespace std;
int main()
{
   int n,arr[10], eve=0, odd=0, i;
   cout<<"Enter Array Elements: ";
   cin>>n;
   cout<<"Enter input value : ";
   for(i=0; i<n; i++)
      cin>>arr[i];
   for(i=0; i<n; i++)
   {
      if(arr[i]%2==0)
         eve++;
      else
         odd++;
   }
   cout<<" Number of Even Numbers : "<<eve<<endl;
   cout<<" Number of Odd Numbers : "<<odd;
   cout<<endl;
   return 0;
}
