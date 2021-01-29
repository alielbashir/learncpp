#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // IF STATEMENT 
    bool isStudent = false;
    bool isSmart = false;
 
    if (isStudent && isSmart) {
        cout << "you are a smart student" << endl;
    } else if (isStudent ){
        cout << "you are not a smart student" << endl;
    }


    return 0;
}