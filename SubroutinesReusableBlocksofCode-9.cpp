#include <iostream>
using namespace std;

int getsum2number(int number1,int number2,char amalgar) {
    int sum2number;
    if(amalgar=='+') {
        sum2number=number1+number2;
    }else if(amalgar=='-') {
        sum2number=number1-number2;
    }else if(amalgar=='*') {
        sum2number=number1*number2;
    }else if(amalgar=='/') {
        if(number2 != 0){
        sum2number=number1/number2;
    }else{
        cout << "adad / bar 0 mojaz nist!" << endl;
        return 0;
    }
}else{
    cout << "amalgar dorost ra vared nakardid!" << endl;
    return 0;
}

    return sum2number;
}

int main() {
    int number1,number2;
    char amalgar;
    cout << "2 adad ra vared konid va yeki az amalgar haye +,-,*,/ ra ham vared konid:" << endl;
    cin >> number1 >> number2 >> amalgar;

    int sum2number=getsum2number(number1, number2 , amalgar);
    cout << sum2number << endl;
    return 0;
}