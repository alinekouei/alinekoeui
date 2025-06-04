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
double getminimumvalue(double number1,double number2){
    double minimumvalue;
    if (number1 < number2)
    {
        minimumvalue=number1;
    }else{
        minimumvalue=number2;
    }
    return minimumvalue;
}

int main() {

    int inum1,inum2;
    double dnum1,dnum2;
    cout << "2 adad sahih ra vared konid:" << endl;
    cin >> inum1 >> inum2;
    cout << getminimumvalue(inum1,inum2) << endl;

    cout << "2 adad ashari re vared konid:" << endl;
    cin >> dnum1 >> dnum2;
    cout << getminimumvalue(dnum1, dnum2) << endl;
    return 0;
}
