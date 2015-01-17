#include <iostream>
using namespace std;

// Funktion, die den Inhalt eines Arrays ausgibt (Funktionenrumpf)
void checkArray(int array[], int size);

int main()
{ 
  int data[10] = {1, 5, 7, 42, 8, 8, 15, -62, 2015, 999};
 
  // Ausgabe von Inhalt u. Größe (ohne Funktion)
  unsigned int array_size = sizeof(data) / sizeof(data[0]);

  cout << "[ ";
  for (size_t i = 0; i < array_size; i++)
    cout << data[i] << "  ";

  cout << "]    (Größe: " << array_size << ")" << endl;



  // Ausgabe von Inhalt u. Größe (mit Funktion)
  checkArray(data, array_size);

  return 0;
}

// Funktion, die den Inhalt eines Arrays ausgibt (Funktionenkörper)
void checkArray(int array[], int size) {
  cout << "[ ";
  
  for (size_t i = 0; i < size; i++)
    cout << array[i] << "  ";

  cout << "]    (Größe: " << size << ")" << endl;
}
