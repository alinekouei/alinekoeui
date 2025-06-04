#include <iostream>
using namespace std;

namespace intNamespace {
    int number = 10;
}
namespace doublNamespace {
    double number = 10.5;
}
int main() {
    cout << "adad sahih: " << intNamespace::number << endl;
    cout << "adad ashari: " << doublNamespace::number << endl;
    return 0;
}