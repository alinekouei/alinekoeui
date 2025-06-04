#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Tedad adad khod ra vared konid: " << endl;
    cin >> N;

    double scores[N];

    for (int i = 0; i < N; i++) {
        cout << "Adad ra vared konid: ";
        cin >> scores[i];
    }

    double number;
    cout << "Yek adad digar ra vared konid: " << endl;
    cin >> number;

    bool found = false;
    for (int i = 0; i < N; i++) {
        if (scores[i] == number) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "find" << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}