#include <iostream>
using namespace std;

// Funktion, die den Inhalt eines Arrays ausgibt (Funktionenrumpf)
// Zwei Versionen, unterschieden durch Parameterüberladung
void checkArray(int array[]);
void checkArray(int array[], int size);  //erweiterte Version zur Problemlösung

int main() { 
  int data[10] = {1, 5, 7, 42, 8, 8, 15, -62, 2015, 999};
 
  // Ausgabe von Inhalt u. Größe (ohne Funktion)
  unsigned int array_size = sizeof(data) / sizeof(data[0]);

  cout << "direkt: " << endl << "  [ ";
  for (size_t i = 0; i < array_size; i++)
    cout << data[i] << "  ";

  cout << "]    (Größe: " << array_size << ")" << endl;


  
  // Ausgabe von Inhalt u. Größe (mit ursprünglicher Funktion)
  checkArray(data);
  // Von einem Array wird bei einem Funktionsaufruf nur ein Pointer auf das 
  // erste Element übergeben, die Information "Größe" geht verloren und die 
  // Ausgabe schlägt fehl
  // Je nach System (32/64Bit) werden hier typischerweise die ersten 1 bzw. 2
  // Elemente ausgegeben, auf anderen Architekturen ist aber auch ein komplett
  // anderes Verhalten möglich
  
  
  
  // Ausgabe von Inhalt u. Größe (mit korrigierter Funktion)
  // die Größe wird manuell mit übergeben, dadurch ist eine korrekte 
  // Verarbeitung möglich
  checkArray(data, array_size);

  return 0;
}

// Funktion, die den Inhalt eines Arrays ausgibt (Funktionenkörper)
void checkArray(int array[]) {
  cout << "Funktion 1: " << endl;
  cout << "  sizeof(array) = " << sizeof(array) << endl;
  cout << "  sizeof(array[0]) = " << sizeof(array[0]) << endl;
  
  cout << "  [ ";
  
  for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    cout << array[i] << "  ";

  cout << "]    (Größe: " << sizeof(array) / sizeof(array[0]) << ")" << endl;
}
// korrigierte Funktion, die den Inhalt eines Arrays ausgibt (Funktionenkörper)
void checkArray(int array[], int size) {
  cout << "Funktion 2: " << endl;
  cout << "  [ ";
  
  for (size_t i = 0; i < size; i++)
    cout << array[i] << "  ";

  cout << "]    (Größe: " << size << ")" << endl;
}
