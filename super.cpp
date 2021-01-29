#include <iostream>
#include <string>
using namespace std;

class Chef {
public:
    string name;
    int age;

    Chef(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad() {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish() {
        cout << "The chef makes a special dish" << endl;
    }
};
// ItalianChef inherits Chef. i.e. ItalianChef is a sub-class of Chef
class ItalianChef : public Chef {
public:
    string countryOfOrigin;
    // call constructor of chef with name and age, and use italianchef constructor for local attribute COG
    ItalianChef(string name, int age, string countryOfOrigin) : Chef(name, age)
    {
        this->countryOfOrigin = countryOfOrigin;
    }

    void makePasta() {
        cout << "The chef makes pasta" << endl;
    }

    // override
    void makeSpecialDish() {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main() {
    Chef myChef("Gordon Ramsay", 50);
    myChef.makeChicken();
    ItalianChef myItalianChef("massimo lugi", 55, "Italy");
    myItalianChef.makeChicken();
    cout << myItalianChef.age << endl;

    myChef.makeSpecialDish();
    myItalianChef.makeSpecialDish();
    return 0;
}