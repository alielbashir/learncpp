#include <iostream>
#include <string>
using namespace std;

int main()
{
    // VARIABLES
    string name = "aloba22"; // string
    char testGrade = 'A'; // 8 bit character. Must be single quotes ('A')

    // can be unsigned with unsigned prefix
    short age0 = 10;
    int age1 = 20;
    long age2 = 20;
    long long age3 = 40;

    float gpa0 = 2.5f;
    double gpa1 = 3.5;
    long double gpa2 = 3.5;

    bool isTall;    // declaration then assignment is legal
    isTall = true;

    name = "Ali";
    cout << "your name is " << name << endl;

    return 0;
}