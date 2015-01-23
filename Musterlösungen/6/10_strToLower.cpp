#include <iostream>
#include <locale>
#include <cstring>
using namespace std;

void strToLower(const char* src, char* dest);
char* strToLowerFail(const char* src); //für Zusatzfrage

int main()
{
  const char* original = "Die Antwort ist 42";
  char lowercase[100]; //Reserviere ausreichend Speicher
  
  cout << "Originaltext: " << original << endl;
  
  strToLower(original, lowercase);
  cout << "Kleinschreibung: " << lowercase << endl;
  
  //Zusatzfrage
  char* fehler = strToLowerFail(original);
  cout << "Zusatzfrage Rückgabe: " << fehler << endl;
  
  return 0;
}
// Ausgabe:
//  Originaltext: Die Antwort ist 42
//  Kleinschreibung: die antwort ist 42
//  Zusatzfrage Funktion: die antwort ist 42
//  Zusatzfrage Rückgabe: die antwp\�


void strToLower(const char* src, char* dest) {
  //Achtung: der Aufrufer muss sicherstellen dass 'dest' Ausreichend groß ist für den Inhalt von 'src'!!
  
  while (*src != 0) { //Gehe Zeichenweise durch bis zum Ende (makiert durch Null-Char)
    if (*src >= 'A' && *src <= 'Z') { //Prüfe ob aktuelle Zeichen im Bereich der Großbuchstaben liegt
      *dest = *src + ('a' - 'A'); //Ziehe die Differenz von Klein zu Großbuchstaben ab
    } else {
      *dest = *src;
    }
    // 'A' == 65 == 0x41
    // 'a' == 97 == 0x61
    // d.h. man kommt vom Groß- zum Kleinbuchstaben, indem man die Differenz der Asciiwerte addiert
    // 'a' == 'A' + 32 == 'A' + 0x20
    
    // alternativ: nutze Standardbibliothek
    //*dest = tolower(*src);
    // Vorteil: dann werden auch Länderspezifische Sonderzeichen wie äöü 
    // automatisch richtig behandelt
    
    ++src;
    ++dest;
  }
  *dest = 0; //Setze Marker für String-Ende
}

//Achtung, das sollte man so nicht machen, führt zu unschönen Fehlern
//Grund dafür siehe Kommentare in der Funktion
char* strToLowerFail(const char* src) {
  char dest[100];                 //hier wird Speicher reserviert für das Ergebnis, als lokale Variable
  size_t i = 0;
  
  while (src != 0 && i < 99) {
    dest[i] = tolower(*(src+i));
    ++i;
  }
  dest[i] = 0;
  
  cout << "Zusatzfrage Funktion: " << dest << endl;
  return dest;                    //hier wird (wie beim Funktionsaufruf) nur ein Pointer zurückgegeben
  // Der eigentliche Inhalt des char[] wird ungültig, sobald die Funktion verlassen wird, da der
  // Gültigkeitsbereich der Variablen verlassen wurde. Möglicherweise findet man noch eine Weile die
  // erwarteten Daten vor, verlassen kann man sich darauf aber nicht. Insbesondere könnte dies zu einem
  // Fehler führen, nachdem man ganz woanders im Programm etwas geändert hat und der Compiler dadurch 
  // Speicherbereiche anders zuteilt.
  // Je nach Compiler und Optionen erhält man eine Warnung vor dem Fehler:
  //10_strToLower.cpp: In function ‘char* strToLowerFail(const char*)’:
  //10_strToLower.cpp:54:8: warning: address of local variable ‘dest’ returned [-Wreturn-local-addr]
  //   char dest[100];
}