#include <iostream>

using namespace std;


//Zunächst die Prototypen der Funktionen, damit der Compiler die Namen kennt
//Aufgabe 3
int fak(unsigned int n);
//Aufgabe 4
int sumquad(int n);
//Aufgabe 5
float division(float a, float b);
//Aufgabe 6
int division(int a, int b);

int main() {
  // Einlesen der Parameter von der Konsole
  int n;
  cout << "Berechne Fakultät und Quadratsumme mit n = ";
  cin >> n;
  
  // Berechne Fakultät und gib Ergebnis aus
  int nfak = fak(n);
  cout << "n! = " << nfak << endl;
  
  
  // Berechne Quadratsumme und gib Ergebnis aus
  int sum = sumquad(n); 
  cout << "Summe der Quadrate von 1..n => " << sum << endl << endl;
  
  cout << "Berechne Quotient aus" << endl;
  float a, b;
  cout << "Zähler a := ";
  cin >> a;
  cout << "Nenner b := ";
  cin >> b;
  
  int c = (int)a;
  int d = (int)b;
  cout << "Verwende abgeleitete ganzzahlige Parameter c=" << c << " und d=" << d << endl;
  
  // Rufe Berechnungsfunktionen auf
  float quotient_float = division(a, b); //FlieÃkomma
  int quotient_int = division(c, d); //Ganzzahl
  
  //Gib Ergebnis aus
  cout << "Fließkommadivision a/b = " << a << " / " << b << " = " << quotient_float << endl;
  cout << "Ganzzahldivision c/d = " << c << " / " << d << " = " << quotient_int << endl;
  
  return 0;
  

//Und hier kommt die Implementation
int fak(unsigned int n) {
  if(1 >= n) {
    return 1;
  } else {
    return n * fak(n - 1);
  }
}

int sumquad(int n) {
  if(1 == n) {
    return 1;
  } else {
    return n * n + sumquad(n - 1);
  }
}

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