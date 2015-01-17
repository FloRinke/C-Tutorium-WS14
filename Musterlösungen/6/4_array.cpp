#include <iostream>
using namespace std;

int main()
{
  int data[5];

  // Da das Array nur deklariert und nicht initialisiert wurde, befinden sich keine
  // wohldefnierten Werte im entsprechenden reservierten Speicherbereich, sondern mehr
  // oder weniger zufällige Bitfolgen. Sie sollten deswegen die Ausgabe von relativ
  // zufälligen Zahlen beobachten, die sich von den ausgegebenen Werten bei ihren Kommilitonen
  // unterscheiden.
  
  for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    cout << (i + 1) << ". Element des Arrays: " << data[i] << endl;

  return 0;
}
