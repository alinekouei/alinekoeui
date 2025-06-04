#include <iostream>
using namespace std;

int main() {
    const int satr= 2;
    const int soton = 3;

    int matrix1[satr][soton];
    int matrix2[satr][soton];
    int result[satr][soton];

    cout << "adad haye matrix1 ra vared konid:" << endl;
    for (int i = 0; i < satr; i++) {
        for (int j = 0; j < soton; j++) {
            cout << i << " " << j << endl;
            cin >> matrix1[i][j];
        }
    }

    cout << "adad haye matrix2 ra vared konid:" << endl;
    for (int i = 0; i < satr; i++) {
        for (int j = 0; j < soton; j++) {
            cout << i << " " << j << endl;
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < satr; i++) {
        for (int j = 0; j < soton; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "javab jame 2matrix :" << endl;
    for (int i = 0; i < satr; i++) {
        for (int j = 0; j < soton; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
