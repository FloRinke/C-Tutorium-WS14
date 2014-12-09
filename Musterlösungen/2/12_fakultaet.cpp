#include <iostream>
using namespace std;

int main()
{
  int x; 
  int result = 1;
  cout << "Bitte eine natürliche Zahl eingeben: ";
  cin >> x; 

  for (int i = 2; i <= x; i++) {
    result *= i;
  }
  cout << x << "! = " << result << endl;

  return 0;
}
 
