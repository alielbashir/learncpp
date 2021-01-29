#include <iostream>
#include <string>
using namespace std;

int main()
{
    // STRINGS
    // arrays of chars

    string greeting = "hello";
    cout << greeting[0] << endl; // index accessible

    // common funcs
    cout << greeting.length() << endl; // length of strings
    cout << greeting.find("llo") << endl; // search within string.
                                          // returns first string occurence index. i.e 2
    cout << greeting.substr(2) << endl;   // returns substring beginning from input until end of string
    cout << greeting.substr(1, 3) << endl;// returns substring beginning from 1st parameter to 2nd parameter index



}