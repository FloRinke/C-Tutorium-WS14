#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float x = 2.491726;
  
  cout << "sin(x) + cos(x)            == " << sin(x) + cos(x) << endl;
  cout << "exp(x)                     == " << exp(x) << endl;
  cout << "log(abs(x)) + sqrt(abs(x)) == " << log(abs(x)) + sqrt(abs(x)) << endl;

  // Zusatz:
  // a^b = exp(b * log(a)) ==> x^7 = exp(7 * log(x))
  
  cout << "x^7                        == " << exp(7 * log(x)) << endl;

  return 0;
}
