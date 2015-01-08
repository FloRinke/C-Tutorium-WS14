#include <iostream>
#include <string>

using namespace std;

int main() {
  // Einlesen einer Zeichenkette von der Konsole
  string text1, text2, text3;
  cout << "Geben Sie eine Zeile ein:" << endl;
  cin >> text1;
  cin >> text2;
  cin >> text3;
  
  //Gib Ergebnis aus
  cout << "Die Variablen enthalten folgende Texte:" << endl;
  cout << "text1: " << text1 << endl;
  cout << "text2: " << text2 << endl;
  cout << "text3: " << text3 << endl;
  
  //Die direkte Nutzung des Eingabestreams geht bei jedem Whitespace 
  //(Leerzeichen, Tabulator, Zeilenumbruch, ...) von einer eigenen 
  //Eingabe aus und gibt nur den Text bis zum nächsten Whitespace zurück
  
  return 0;
}
