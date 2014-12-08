#include <iostream>
using namespace std;

int main()
{
  float x;
  cout << "Bitte Zahl eingeben: "
  cin >> x;

  if (x < 0)
    x = -x;

  cout << endl << "Der Betrag von x lautet: " << x << endl;
  
  return 0;
}
