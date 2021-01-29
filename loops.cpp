#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // WHILE LOOPS
    int index = 1;
    while (index <= 5) {
        cout << index << endl;
        index++;
    }
    int j = 1;
    do {
        cout << j << endl;
    } while (index <= 5);

    // FOR LOOP
    int i = 0;
    for (i = 0; i < 10; i++) {
        cout << i << endl;
    }

    return 0;
}