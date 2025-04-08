#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessnum,randomnum;
        cout <<"The guess number is : ";
        cin>> guessnum;

        randomnum=rand()%5;

        if (guessnum==randomnum)
        {
            cout <<"You won"<<endl<<endl;
        }
        else
        {
            cout << "You lost .try again"<<endl;
            cout <<"the number is : "<<randomnum<<endl<<endl;

        }

    }
    return 0;

}
