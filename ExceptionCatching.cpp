#include <iostream>
#include <string>
#include <vector>
using namespace std;

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero";
    }
    return (a / b);
}

int main() {
    // EXCEPTION CATCHING
    try {
        division(10, 0);
    } catch (const char* msg) {
        cerr << msg << endl;    // catch exception message and output to error channel
    }
    return 0;
}