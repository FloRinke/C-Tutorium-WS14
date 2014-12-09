#include <iostream>
using namespace std;

int main()
{
  char input;
  cout << "Antworten Sie mit Ja (j/J) oder Nein (n/N)" << endl;
  cin  >> input;

  if (input == 'j' || input ==  'J')
    cout << "Sie haben mit JA geantwortet" << endl;
  else if (input == 'n' || input ==  'N')
    cout << "Sie haben mit NEIN geantwortet" << endl;
  else
    cout << "Ihre Eingabe war ungültig" << endl;
  
  return 0;
}
 
