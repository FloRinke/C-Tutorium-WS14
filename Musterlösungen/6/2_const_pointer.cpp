#include <iostream>
using namespace std;

int main()
{
  char c = 'A';
  
  
  // deklariere verschiedene Pointer auf die Variable c
  // bei der Interpretation derartiger Ausdrücke kann die Website 
  // http://www.cdecl.org/ helfen
  char * c_p0 = &c;             //declare c_p0 as pointer to char
  const char * c_p1 = &c;       //declare c_p1 as pointer to const char
  //char const * c_p1 = &c;       //gleiche Bedeutung wie vorherige Zeile
  char * const c_p2 = &c;       //declare c_p2 as const pointer to char
  const char * const c_p3 = &c; //declare c_p3 as const pointer to const char

  char x = 'B';

  // 'const' bezieht sich immer auf das Element unmittelbar vor ihm. Falls es 
  // kein Element links gibt (z.B. am Zeilenanfang, oder nach einer 
  // Block-öffnenden Klammer '{'), bezieht es sich ausnahmsweise auf das 
  // Element rechts von ihm.
  // D.h. "const char * c_p1" ist gleichbedeutend mit "char const * c_p1", der
  // erste Ausdruck liest sich allerdings natürlicher und wird daher 
  // üblicherweise verwendet.
  
  
  // steht das Schlüsselwort 'const' nach (oder vor, weil weiter links nichts 
  // steht) von 'char', so kann dem Inhalt der Speicherzelle, auf die der 
  // Pointer zeigt, kein neuer Wert zugewisen werden.

  c_p1 = &x; // möglich
  // *c_p1 = x; unmöglich


  // steht das Schlüsselwort 'const' hinter dem '*', so kann dem Pointer keine
  // neue Adresse zugewiesen werden.

  // c_p2 = &x; // unmöglich
  *c_p2 = x; // möglich


  // steht das Schlüsselwort 'const' vor/nach dem 'char und hinter dem '*', so 
  // kann dem Pointer weder eine neue Adresse noch dem Inhalt der 
  // Speicherzelle, auf die der Pointer zeigt ein neuer Wert zugewiesen werden.

  // c_p3 = &x; // unmöglich
  // *c_p3 = x; // unmöglich

  
  
  return 0;
}

