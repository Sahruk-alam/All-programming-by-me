#include <iostream>
using namespace std;
int apples,mangoes,Fruits ;
class fruit
{
public:
    void fruits()
    {
        cout << "Enter number of apples and mangoes : ";
        cin >> apples>> mangoes;
    }

    void totalfruit()
    {
        Fruits = apples + mangoes;
        cout << "The total fruits in the basket is : " << Fruits << endl;
    }
};

class apple : public fruit
{
public:
    void numapples()
    {
        cout << "The number of apples is : " << apples << endl;
    }
};

class mango : public fruit
{
public:
    void nummangoes()
    {
        cout << "The number of mangoes is : " << mangoes << endl;
    }
};

int main()
{
    apple a1;
    a1.fruits();
    a1.numapples();

    mango m1;
    m1.nummangoes();

    a1.totalfruit();

    return 0;
}
