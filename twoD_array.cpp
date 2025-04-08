#include<iostream>
using namespace std;

int main ()
{
    int A[3][4]={
 {4,5,6,7},
 {15,16,17,18},
 {25,26,27,28}

    };
    for (int row=0;row<3;row++)
    {
        cout <<endl;
        for(int col=0;col<4;col++)
        {
            cout<<A[row][col]<<"  ";
        }
         //cout <<endl;
    }

    return 0;
}
