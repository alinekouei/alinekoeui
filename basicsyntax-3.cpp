#include <iostream>

using namespace std;

int main() {

    int number = 1;
    while (number <= 100) {
        if (number % 2 != 0) {
            cout << number << endl;
        }
        number++;
    }
    return 0;
}
