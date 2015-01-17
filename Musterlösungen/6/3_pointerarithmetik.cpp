#include <iostream>
using namespace std;

int main()
{
  // Deklaration der Variablen
  bool b = true;
  short s = 123;

  // Deklaration der Pointer und Zuweisung der entsprechenden Referenzen
  bool* p_b = &b;
  short* p_s = &s;

  cout << "== bool ==" << endl;
  cout << "(0): " << p_b << endl;
  cout << "(1): " << ++p_b << endl;
  cout << "(2): " << (p_b += 5) << endl;
  cout << "(3): " << --p_b << endl;
  cout << "(4): " << (p_b -= 4) << endl << endl;
  
  cout << "== short ==" << endl;
  cout << "(0): " << p_s << endl;
  cout << "(1): " << ++p_s << endl;
  cout << "(2): " << (p_s += 5) << endl;
  cout << "(3): " << --p_s << endl;
  cout << "(4): " << (p_s -= 4) << endl << endl;

  // Bemerkungen: 
  // (1): Eine Variable vom Typ 'bool' braucht normalerweise nur 1 BIT (wahr/falsch) im Speicher.
  //      Da die meisten Systeme aber nur Byte-weise adressieren können, wird i.d.R. ein Byte
  //      Speicherplatz benötigt. Deswegen erhöht/verringert sich der Wert der Speicheradresse i.d.R.
  //      um 1, wenn man den Pointer um 1 erhöht/verringert. 

  // (2): Eine Variable vom Typ 'short' braucht auf den meisten Sytemen einen Speicherbereich von 
  //      2 Byte. Deswegen erhöht/verringert sich der Wert der Speicheradresse i.d.R. um 2, wenn man
  //      den Pointer um 1 erhöht/verringert. 

  
  
  return 0;
}
