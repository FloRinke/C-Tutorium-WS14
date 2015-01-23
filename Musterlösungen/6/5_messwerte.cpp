#include <iostream>
#include <cstring> //nötig für memset-Funktion
using namespace std;

int main()
{
  // Sie können einem Array bei dessen Initialisierung Anfangswerte zuweisen. 
  // Ist das Array größer, als die Anzahl der Werte in den geschweiften 
  // Klammern, so werden die restlichen Werte des Arrays mit Nullen aufgefüllt.
  // Dies können Sie bei der folgenden Initialisierung des Arrays 
  // 'measurements' ausnutzen.
  
  int measurements[1000] = {0};
 
  for (size_t i = 0; i < sizeof(measurements) / sizeof(measurements[0]); i++)
    cout << (i + 1) << ". Element des Arrays: " << measurements[i] << endl;

  // Hinweis: falls man anders als mit Nullen initialiseren möchte, ist in 
  // der Regel eine for-Schleife die beste Option. Im folgenden Beispiel sollen
  // zyklisch die Zahlen von 1 bis 10 aufsteigend eingesetzt werden
  for (size_t i = 0; i < sizeof(measurements) / sizeof(measurements[0]); i++) {
    measurements[i] = (i%10) + 1;
  }
  
  // Zusatzinfo für Interessierte:
  // um beliebige Speicherbereiche zu füllen, kann die Funktion 'memset' 
  // verwendet werden: void * memset ( void * ptr, int value, size_t num );
  // Achtung: Diese Funktion arbeitet Byte-Weise, daher darf der Füllwert 
  // 'value' nicht größer als ein char sein und die Größe des Bereichs muss in
  // Byte angegeben werden
  memset(&measurements, 0, 1000*sizeof(int));
  
  // Durch das Byteweise füllen, kann es zu unerwarteten Ergebnissen kommen:
  memset(&measurements, 1, 1000*sizeof(int));
  // füllt jedes Byte mit '1', d.h. der erste int (bestehend aus vier Bytes)
  // hat den Wert 0x01010101 = 16 843 009
  
  return 0;
}
