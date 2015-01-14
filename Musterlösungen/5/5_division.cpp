#include <iostream>

using namespace std;

float division(float a, float b) {
  if(0 == b) {
    return 0;
  } else {
    return a/b;
  }
}

int main() {
  // Einlesen einer Zeichenkette von der Konsole
  float a, b;
  cout << "Zähler a := ";
  cin >> a;
  cout << "Nenner b := ";
  cin >> b;
  
  // Rufe Berechnungsfunktion auf
  float quotient = division(a, b);
  
  //Gib Ergebnis aus
  cout << "Quotient a/b = " << a << " / " << b << " = " << quotient << endl;
  return 0;
}
