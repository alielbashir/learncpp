#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;

    Book (string title, string author) {
        this->title = title;
        this->author = author;
    }
    void readBook() {
        cout << "reading " + this->title + " by " + this->author << endl;
    }
};

int main() {
    Book book1("Harry Potter", "JK Rowling");

    book1.readBook();

    return 0;
}