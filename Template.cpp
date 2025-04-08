#include<iostream>
using namespace std;
template <class person>
person add (person a,person b)
{
    return a+b;
}
person subs(person a, person b)
{
    return a-b;
}
int main()
{
    cout<<add(12,32)<<endl;
    cout<<add(12.4,32.8)<<endl;
    add(12,3);
return 0;
}
