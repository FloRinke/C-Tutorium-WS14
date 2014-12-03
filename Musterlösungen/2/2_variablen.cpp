#include <iostream>
using namespace std;

int main()
{
  int a = 15;
  cout << a << endl;

  int b = 2;
  cout << b << endl;

  int erg;
  cout << erg << endl;

  float f = 1.5 ;
  cout << f << endl;

  erg = b * a/4;
  cout << erg << endl;

  erg = !a;
  cout << erg << endl;

  erg = b * (a & 1);
  cout << erg << endl;

  erg = a | b ;
  cout << erg << endl;

  erg = (a >> b) << a;
  cout << erg << endl;

  erg = (b % a) ? a : b;
  cout << erg << endl;

  f = 0.00000001 * f * 2;
  cout << f << endl;
  
  return 0;
}
