#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i = 42;
  char c = 'x';
  float f = 3.1415;
  string s = "Hello World";

  int* i_p = &i;
  char* c_p = &c;
  float* f_p = &f;
  string* s_p = &s;
  

  cout << "= int =" << endl;
  cout << i_p << endl;
  cout << *i_p << endl << endl;
  
  // cout gibt bei einer Variablen vom Typ 'char*' nicht den Namen der Speicheradresse,
  // sondern den eigentlichen Wert zurück. Will man trotzdem die Adresse erhalten, muss
  // man zunächst nach (void*) casten.
  cout << "= char =" << endl;
  cout << (void*) c_p << endl;
  cout << *c_p << endl << endl;

  cout << "= float =" << endl;
  cout << f_p << endl;
  cout << *f_p << endl << endl;

  cout << "= string =" << endl;
  cout << s_p << endl;
  cout << *s_p << endl << endl;

  return 0;
}

