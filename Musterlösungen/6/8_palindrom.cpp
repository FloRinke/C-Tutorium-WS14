#include <iostream>
using namespace std;

int main()
{
  const char* str = "Trug Tim eine so helle Hose nie mit Gurt?";
  const char* copy1 = str;
  const char* copy2 = str;
    
  while(*copy2++);
  copy2 -= 2; // copy2 zeigt jetzt auf das letzte Zeichen, copy1 auf das Erste.

  bool isPalindrom = true; 

  
  while(isPalindrom) {
    // Zeichen die keine Buchstaben sind, werden übersprungen (z.B. Leerzeichen)
    while(!(isalpha(*copy1))) 
      copy1++;
    while(!(isalpha(*copy2))) 
      copy2--;

    // Überprüfung ob der Buchstabe auf den der linke Pointer zeigt gleich dem
    // Buchstaben ist, auf den der rechte Pointer zeigt. Groß- und Kleinschreibung
    // wird dadurch ignoriert, dass beim Vergleich Großbuchstaben zunächst in die
    // entsprechenden Kleinbuchstaben umgewandelt werden. 
    isPalindrom = tolower(*copy1) == tolower(*copy2);

    // Falls die beiden Zeiger nun auf benachbarte Speicherzellen zeigen (copy2 - copy1 == 1, z.B. Lagerregal)
    // oder nur noch ein Buchstabe zwischen ihnen liegt (copy2 - copy1 == 2, z.B. Rentner) springt man aus der
    // Schleife (die Überprüfung ist abgeschlossen). 
    //
    //               |                         |
    //               ∨                         ∨ 
    //    |L|a|g|e|r|r|e|g|a|l|       |R|e|n|t|n|e|r|
    //             ∧                       ∧ 
    //             |                       |
    if (copy2 - copy1 <= 2)
      break;

    // Der linke Pointer muss nun auf den nächsten Buchstaben zeigen, der Rechte auf den Vorherigen
    copy1++; 
    copy2--;
  };

  // Aufgabe, abhängig von der Variablen isPalindrom
  if(isPalindrom)
    cout << "\"" << str << "\" ist ein Palindrom!";
  else
    cout << "\"" << str << "\" ist kein Palindrom!";

  return 0;
}
