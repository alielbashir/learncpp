#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    //only code inside book can access this
private:
    string title;
    string author;

public:
    Book(string title, string author) {
        this->title = title;
        this->author = author;
    }
    string getTitle() {
        return this->title;
    }
    void setTitle(string title) {
        this->title = title;
    }
        string getAuthor() {
        return this->author;
    }
    void setAuthor(string author) {
        this->author = author;
    }
    void readBook() {
        cout << "reading " + this->title + " by " + this->author << endl;
    }
};

int main() {
    Book book1("Harry Potter", "JK Rowling");

    book1.readBook();
    cout << book1.getAuthor() << endl;
    return 0;
}