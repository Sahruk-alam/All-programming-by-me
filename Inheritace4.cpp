#include <iostream>
using namespace std;
class Mammals {
public:
    void Mammal()
    {
        cout << "I am a mammal." <<endl;
    }
};

class MarineAnimals {
public:
    void MarineAnimal() {
        cout << "I am a marine animal." <<endl;
    }
};

class BlueWhales : public Mammals, public MarineAnimals {
public:
    void BlueWhale()
    {
        cout << "I belong to both the categories:Mammals as well as Marine Animals" << endl;

    }
};

int main() {
    Mammals objmammal;
    objmammal.Mammal();

    MarineAnimals objmarineAnimal;
    objmarineAnimal.MarineAnimal();

    BlueWhales objblueWhale;
    objblueWhale.BlueWhale();


    objblueWhale.Mammal();
    objblueWhale.MarineAnimal();

    return 0;
}
