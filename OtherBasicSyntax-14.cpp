#include <iostream>
using namespace std; 

int main() {
    double radius;
    const double PI = 3.14;

    cout << "shoae daire re vared konid: ";
    cin >> radius;

    double circumference = 2 * PI * radius;

    cout << "mohit daire: " << circumference << endl;

    return 0;
}