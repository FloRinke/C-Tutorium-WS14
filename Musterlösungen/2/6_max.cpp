#include <iostream>
using namespace std;

int main()
{
  int a, b; 

  cout << "Bitte a eingeben: ";
  cin >> a;

  cout << "Bitte b eingeben: ";
  cin >> b;

  int max; 
  if (a > b)
    max = a;
  else
    max = b; 

  // alternative Variante mit ternärem Bedingungsoperator
  //  a > b ? max = a : max = b;

  cout << "Das Maximum von a und b ist: " << max << endl;
  
  return 0;
}
