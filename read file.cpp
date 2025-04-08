#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string l;
    ifstream file("details.txt");
    while(getline(file,l))
    {
        cout<<l<<endl;
    }
    file.close();
    return 0;
}

