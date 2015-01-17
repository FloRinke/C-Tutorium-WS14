#include <iostream>
using namespace std;

int main()
{
  // Sie können einem Array bei dessen Initialisierung Anfangswerte zuweisen. Ist das Array
  // größer, als die Anzahl der Werte in den geschweiften Klammern, so werden die restlichen
  // Werte des Arrays mit Nullen aufgefüllt. Dies können Sie bei der folgenden Initialisierung
  // des Arrays 'measurements' ausnutzen.
  
  int measurements[1000] = {0};
 
  for (size_t i = 0; i < sizeof(measurements) / sizeof(measurements[0]); i++)
    cout << (i + 1) << ". Element des Arrays: " << measurements[i] << endl;

  return 0;
}
