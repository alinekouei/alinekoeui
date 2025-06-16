#include <iostream>
using namespace std;

struct Book {
    string title;
    string nevisande;
    int year;
    double price;

    void display() {
        cout << "title: " << title << endl;
        cout << "nevisande: " << nevisande << endl;
        cout << "year: " << year << endl;
        cout << "price: " << price << " tooman" << endl;
    }

    bool isCheaperThan(Book other) {
        return price < other.price;
    }
};

int main() {
    Book book1, book2;

    cout << "etalaat book1:\n";
    cout << "title: ";
    getline(cin, book1.title);
    cout << "nevisande: ";
    getline(cin, book1.nevisande);
    cout << "year: ";
    cin >> book1.year;
    cout << "price: ";
    cin >> book1.price;
    cin.ignore();
    cout << "\netelaat book2:\n";
    cout << "title: ";
    getline(cin, book2.title);
    cout << "nevisande: ";
    getline(cin, book2.nevisande);
    cout << "year: ";
    cin >> book2.year;
    cout << "price: ";
    cin >> book2.price;

    cout << "\nmoshakhasat book1:\n";
    book1.display();
    cout << "\nmoshakhasat book2:\n";
    book2.display();

    if (book1.isCheaperThan(book2))
        cout << "\nbook1 arzantar ast.\n";
    else
        cout << "\nbook2 arzantar ast.\n";

    return 0;
}
