#include <iostream>
#include <vector>

using namespace std;

vector<int> swap_copy(vector<int> vec, int a, int b);
vector<int>& swap_ref(vector<int> &vec, int a, int b);

int main()
{
  // Initialisiere Test-Vector
  // Nach C++11 standard:
  //vector<int> v1 = {11, 12, 2014, 314, 42};
  // Fuer Comiler die diesen Standard nicht unterstuetzen:
  int A[] = {11, 12, 2014, 314, 42};
  vector<int> v1(&A[0], &A[0]+5);


  // Ausgeben aller Werte
  cout << "Im Vektor v1 befinden sich zunächst folgende Werte: ";
  for (int i = 0; i < v1.size(); ++i) {
    cout << v1[i] << " ";
  }
  cout << endl << endl;

  cout << "Speicheradresse von v1: " << &v1 << endl;
  // Tausche Elemente 2 und 3
  vector<int> v2 = swap_copy(v1, 2, 3);
  swap_ref(v1, 2, 3);
  
  cout << "Im Vektor v1 befinden sich nun folgende Werte: ";
  for (int i = 0; i < v1.size(); ++i) {
    cout << v1[i] << " ";
  }
  cout << endl;
  
  cout << "Im Vektor v2 befinden sich nun folgende Werte: ";
  for (int i = 0; i < v2.size(); ++i) {
    cout << v2[i] << " ";
  }
  cout << endl;
    
  cout << "Speicheradresse von v2: " << &v2 << endl;
  
  //Die Ausgabe zeigt, dass der Aufruf der swap-Funktion mit Referenzparameter 
  //auf die gleiche Speicheradresse zeigt wie v1.
  //Der Aufruf ohne Referenz legt eine Kopie an zum Arbeiten, und kopiert die 
  //Daten beim return erneut.
  //Bei größeren Datenmengen sorgt dieses Kopieren für einen erheblichen
  //Aufwand, zumal beim Sortieren in der Regel mehr als einmal vertauscht 
  //werden muss.
}

//Die Implementation der swap-Funktionen ist identisch, der einzige Unterschied
//ist die Übergabe der Parameter als Wert oder Referenz
vector<int> swap_copy(vector<int> vec, int a, int b) {
  cout << "Speicheradresse von vec(copy): " << &vec << endl;
  int temp = vec.at(a);
  vec.at(a) = vec.at(b);
  vec.at(b) = temp;
  return vec;
}

vector<int>& swap_ref(vector<int> &vec, int a, int b) {
  cout << "Speicheradresse von vec(ref): " << &vec << endl;
  int temp = vec.at(a);
  vec.at(a) = vec.at(b);
  vec.at(b) = temp;
  return vec;
}
