#include <iostream>

using namespace std;

int main() {
   int number1,number2;
   cout << "2 adad ra vared konid:" << endl;
   cin >> number1 >> number2;

   char operand;
   cout << "az bein yeki az karekter haye riazi +,-,*,/ ra yeki entekhab konid" << endl;
   cin >> operand;

   switch(operand) {
    
    case '+' :
        cout << number1+number2 << endl;
        break;

    case '-' :
        cout << number1-number2 << endl;
        break;

    case '*' :
        cout << number1*number2 << endl;
        break;

    case '/' :
        if(number2 != 0) { 
            cout << number1/number2 <<endl;
        }else {
            cout << "taqhsim bar sefr javab nadarad!" << endl;
        } 
        break;

    default :
        cout << "char entekhabi ra dorost vared konid!" << endl;
        break;      
   }

   return 0;



}