#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ARRAYS
    // indexed serial data structure with elements of the same type
    // size can't be changed

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    luckyNumbers[0] = 90;
    cout << luckyNumbers[0] << endl;
    cout << luckyNumbers[1] << endl;

    return 0;


}