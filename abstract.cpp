#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    // ABSTRACT FUNCTION
    virtual void move() = 0;
    void getDescription() {
        cout << "Vehicles are used for transportation" << endl;
    }
};
// Bicycle implements Vehicle
class Bicycle : public Vehicle {
public:
    void move() {
        cout << "The bicycle pedals forward" << endl;
    }
};

class Plane : public Vehicle {
public:
    void move() {
        cout << "The plane flies through the sky" << endl;
    }
};

int main() {
    Plane myPlane;
    Bicycle myBike;
    myBike.move();
    myPlane.move();
    return 0;
}