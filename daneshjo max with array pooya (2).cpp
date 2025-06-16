#include <iostream>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    int n;
    cout << "tedad daneshjoo: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "name daneshjoo " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "score daneshjoo " << i + 1 << ": ";
        cin >> students[i].score;
    }

    Student maxStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].score > maxStudent.score) {
            maxStudent = students[i];
        }
    }

    cout << "\ndaneshjoo ba bishtarin score:\n";
    cout << "name: " << maxStudent.name << endl;
    cout << "score: " << maxStudent.score << endl;

    delete[] students;

    return 0;
}
