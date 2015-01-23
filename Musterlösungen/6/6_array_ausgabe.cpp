#include <iostream>
using namespace std;

int main()
{ 
  int data[10] = {1, 5, 7, 42, 8, 8, 15, -62, 2015, 999};
 
  // 1. Variante
  cout << "== 1. Variante (Indizierungsoperator []) ==" << endl;
  for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    cout << (i + 1) << ". Element des Arrays: " << data[i] << endl;

  // 2. Variante
  cout << endl << "== 2. Variante (Pointer mir Dereferenzierungsoperator *) ==" << endl;
  for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    cout << (i + 1) << ". Element des Arrays: " << *(data + i) << endl;
  
  // Zur Erinnerung: Addition von '1' zur Adresse eines Pointers, springt nicht
  // ein Byte, sondern ein Element weiter (bei einem 'int' also üblicherweise 
  // 4 Bytes, je nach System kann ein int aber verschieden groß sein)
  // Das ganze gilt natürlich nicht nur für +1, sondern für beliebige 
  // Addition/Subtraktion von Pointern.
  
  return 0;
}
