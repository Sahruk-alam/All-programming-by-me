
#include<iostream>
using namespace std;
class vehicle
{
public:
    void disvehicle(int speed,string color)
    {
        cout <<"Speed : "<<speed<<"cc"<<endl;
        cout <<"Color : "<<color<<endl<<endl;
    }
};
class car : public vehicle
{
public:
    void discar()
    {
        cout<<"Many people can sit in the combination of four wheels"<<endl;
        cout<<"A car speed and color is : "<<endl;
    }

};
class bike : public vehicle
{
public:
    void disbike()
    {
        cout <<"Two or three people can sit in bike"<<endl;
        cout<<"The bike speed and color is : "<<endl;
    }

};
int main ()
{
    car ob;
    ob.discar();
    ob.disvehicle(100, "Blue");

    bike obj;
    obj.disbike();
    obj.disvehicle(110,"Navy");

    return 0;
}
