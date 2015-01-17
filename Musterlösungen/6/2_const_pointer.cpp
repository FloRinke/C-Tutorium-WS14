#include <iostream>
using namespace std;

int main()
{
  char c = 'A';
  
  const char * c_p1 = &c;
  char * const c_p2 = &c;
  const char * const c_p3 = &c;

  char x = 'B';

  // steht das Schlüsselwort 'const' vor dem '*', so kann dem Inhalt der Speicherzelle,
  // auf die der Pointer zeigt, kein neuer Wert zugewisen werden.

  c_p1 = &x; // möglich
  // *c_p1 = x; unmöglich


  // steht das Schlüsselwort 'const' hinter dem '*', so kann dem Pointer keine neue Adresse
  // zugewiesen werden.

  // c_p2 = &x; // unmöglich
  *c_p2 = x; // möglich


  // steht das Schlüsselwort 'const' vor und hinter dem '*', so kann dem Pointer weder eine
  // neue Adresse noch dem Inhalt der Speicherzelle, auf die der Pointer zeigt ein neuer Wert
  // zugewiesen werden.

  // c_p3 = &x; // unmöglich
  // *c_p3 = x; // unmöglich

  
  return 0;
}

