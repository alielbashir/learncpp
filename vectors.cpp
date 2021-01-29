#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // VECTORS
    // arrays with dynamic size
    vector<string> friends;
    friends.push_back("Oscar"); // append
    friends.push_back("Angela");
    friends.push_back("Kevin");

    for (int i = 0; i < friends.size(); i++) {
        cout << i << ": " << friends.at(i) << endl;
    }
    cout << endl;
    friends.insert(friends.begin() + 1, "jim"); // insert jim into index 1
    
    for (int i = 0; i < friends.size(); i++) {
        cout << i << ": " << friends.at(i) << endl;
    }

    return 0;
}