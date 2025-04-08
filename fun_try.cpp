#include<iostream>
using namespace std;
void mycat(string country="bangladesh")

{
    cout << country <<endl;
}
int main()
{
mycat();
mycat("USA");
return 0;
}
