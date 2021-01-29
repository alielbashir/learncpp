#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;

    void readBook() {
        cout << "reading " + this->title + " by " + this->author << endl;
    }
};

int main() {
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";

    book1.readBook();

    return 0;
}