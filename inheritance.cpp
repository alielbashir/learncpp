#include <iostream>
#include <string>
using namespace std;

class Chef {
public:
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
    void makePasta() {
        cout << "The chef makes pasta" << endl;
    }

    // override
    void makeSpecialDish() {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main() {
    Chef myChef;
    ItalianChef myItalianChef;

    myChef.makeSpecialDish();
    myItalianChef.makeSpecialDish();
    return 0;
}