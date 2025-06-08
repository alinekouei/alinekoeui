#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream namesFile("names.txt", ios::in);
    if (!namesFile.is_open()) {
        cout << "Error: Unable to open names.txt" << endl;
        return 1;
    }

    fstream familiesFile("families.txt", ios::in);
    if (!familiesFile.is_open()) {
        cout << "Error: Unable to open families.txt" << endl;
        namesFile.close();
        return 1;
    }

    fstream outputFile("combined.txt", ios::out);
    if (!outputFile.is_open()) {
        cout << "Error: Unable to create combined.txt" << endl;
        namesFile.close();
        familiesFile.close();
        return 1;
    }

    string name, family;

    while (getline(namesFile, name) && getline(familiesFile, family)) {
        outputFile << name << " " << family << endl;
    }

    namesFile.close();
    familiesFile.close();
    outputFile.close();

    cout << "Data combined successfully into combined.txt" << endl;
    return 0;
}
