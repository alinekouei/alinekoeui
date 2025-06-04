#include <iostream>

using namespace std;

int main()
{
   int number1,number2;
   char operand ;
   cout << "Enter two numbers and choose one of the operands +, -, *, or /:" << endl;
   cin >> number1 >> number2 >> operand ;

   int result;
   if(operand == '+') {
    result=number1+number2;
   } else if (operand == '-') {
    result=number1-number2;
   } else if(operand == '*') {
    result=number1*number2;
   }else{
    result=number1/number2;
   }
    cout << result << endl;
   return 0;
}

