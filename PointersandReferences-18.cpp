#include <iostream>
using namespace std;

void salam(int& number1, int& number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main() {
    int x = 5, y = 8;
    cout << "Before: " << x << " " << y << endl;
    salam(x, y);
    cout << "After: " << x << " " << y << endl;
    return 0;
}
