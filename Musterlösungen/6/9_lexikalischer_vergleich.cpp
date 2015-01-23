#include <iostream>
using namespace std;

int compare(const char* a, const char* b);

int main()
{
  const char* str1 = "abcdd";
  const char* str2 = "abcde";
  
  cout << "Der Vergleich von \"" << str1 << "\" und \"" << str2 << "\" liefert: " << compare(str1, str2) << endl;;
  
  return 0;
}

int compare(const char* a, const char* b) {
  //Optimierung, die evtl. Laufzeit sparen kann aber funktional auch weggelassen werden kann
  if (a == b) {
    return 0;       // a und b zeigen auf die selbe Adresse, Inhalt muss gleich sein
  }
  
  // eigentlicher Vergleich:
  // gehe beide Strings Zeichenweise durch und vergleiche dabei
  // Die Erhöhung der Pointer erfolgt in der Schleife, den Abbruch der 
  // Schleife erledigt das return mit
  while(true) {
    if (*a == *b) { // der aktuelle Buchstabe ist gleich, fahre fort
      if (*a == 0)  // für beide Texte wurde das Ende erreicht, sie müssen gleich sein
	return 0;
      else
	a++; b++;   //betrachte im nächsten Durchlauf den nächsten Buchstaben
    } 
    //Gleichheit wurde Überprüft, jetzt kommen die Fälle dass es einen Unterschied gab
    else if (*a == 0) {   // a!=b steht fest, da *a==0 ist linker Text kürzer
      return -1;
    } else if (*b == 0) { // a!=b steht fest, da *b==0 ist linker Text kürzer
      return 1;
    } else if (*a < *b) { //vergleiche, welches Zeichen niedriger im (ASCII!!)Alphabet steht
      return -1;
    } else
      return 1;
  };
}
