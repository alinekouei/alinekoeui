#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << "bozorgtar bein 10 va 20: " << getMax(10, 20) << endl;
    cout << "bozorgtar bein 5.5 va 2.3: " << getMax(5.5, 2.3) << endl;

    return 0;
}