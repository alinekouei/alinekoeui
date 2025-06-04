#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "tedad adad khod ra vared konid: " << endl;
    cin >> n;

    float number;
    float bozorgtarinadad;

    cout << "please enter number:" << endl;
    cin >> bozorgtarinadad;

    for (int i = 1 ;i < n; i++) {
        cout << "please enter number:" << endl;
        cin >> number;
        if (number > bozorgtarinadad) {
            bozorgtarinadad=number;
        }
    }

    cout << "bozorgtarin adad vared shode:" << bozorgtarinadad << endl;

    return 0;
}