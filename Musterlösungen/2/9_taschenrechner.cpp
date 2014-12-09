#include <iostream>
using namespace std;

int main()
{
  int number1;
  int number2;
  char operand;

  cout << "Bitte Rechenaufgabe eingeben (verfügbare Operatoren: '+-*/%')" << endl << endl; 

  cout << "Zahl 1:" << endl;
  cin >> number1;
  cout << "Operand:" << endl;
  cin >> operand;
  cout << "Zahl 2:" << endl;
  cin >> number2;

  
  int result;
  switch (operand) {
     case '+' : result = number1 + number2; break;
     case '-' : result = number1 - number2; break;
     case '*' : result = number1 * number2; break;
     case '/' : result = number1 / number2; break;
     case '%' : result = number1 % number2; break;
  }

  cout << " = " << result << endl;

  return 0;
}
