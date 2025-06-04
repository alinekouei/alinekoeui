#include <iostream>

using namespace std;

int getminimumvalue(int number1,int number2){
    int minimumvalue;
    if (number1 < number2)
    {
        minimumvalue=number1;
    }else{
        minimumvalue=number2;
    }
    return minimumvalue;
}

int main() {

    int number1,number2;
    cout << "2 adad ra vared konid:" << endl;
    cin >> number1 >> number2;

    int minimumvalue = getminimumvalue(number1,number2);
    cout << minimumvalue << endl;
    return 0;
}
