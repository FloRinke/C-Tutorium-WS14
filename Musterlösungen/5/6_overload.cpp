#include <iostream>

using namespace std;

float division(float a, float b) {
  if(0 == b) {
   return 0;
  } else {
   return a/b;
  }
}

int division(int a, int b) {
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
  
  int c = (int)a;
  int d = (int)b;
  cout << "Verwende abgeleitete ganzzahlige Parameter c=" << c << " und d=" << d << endl;
  
  // Rufe Berechnungsfunktionen auf
  float quotient_float = division(a, b); //Fließkomma
  int quotient_int = division(c, d); //Ganzzahl
  
  //Gib Ergebnis aus
  cout << "Fließkommadivision a/b = " << a << " / " << b << " = " << quotient_float << endl;
  cout << "Ganzzahldivision c/d = " << c << " / " << d << " = " << quotient_int << endl;
  //die Ergebnisse werden normalerweise verschieden sein, da bei der Ganzzahldivision
  //die Nachkommastellen wegfallen (keine Rundung!!)
  
  return 0;
}
