#include <iostream>
#include <string>
using namespace std;

int main()
{
    // USER INPUT
    // taking input from stdout
    string name; 
    cout << "enter your name: ";
    cin >> name;
    cout << "hello " << name << endl;
    int num1, num2;
    cout << "enter your first num: ";
    cin >> num1;
    cout << "enter second num: ";
    cin >> num2;
    cout << "answer: " << num1 + num2 << endl;

}