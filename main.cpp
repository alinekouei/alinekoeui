#include <iostream>
#include <string>
using namespace std;

// تعریف ساختار Person
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // ایجاد یک نمونه از ساختار Person
    Person person1;

    // مقداردهی به اعضای ساختار
    person1.name = "Ali";
    person1.age = 25;
    person1.height = 1.78;

    // چاپ اطلاعات شخص
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " meters" << endl;

    return 0;
}
