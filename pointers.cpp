#include <iostream>
#include <string>
using namespace std;

int main()
{
    // POINTERS
    // variable references (addresses)
    int num = 10;
    cout <<"num = " << num << " at " << &num << endl;
    int *p = &num;
    *p = 5;
    cout <<"num = " << num << endl;


}