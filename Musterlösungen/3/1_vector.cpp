#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Initialisieren
  // Nach C++11 standard:
  // (das Gleichheitszeichen kann nach diesem standard auch weggelassen werden)
  vector<int> v = {11, 12, 2014, 314, 42};
  // Fuer Comiler die diesen Standard nicht unterstuetzen:
  // Ein Array wird initialisiert, dessen Anfangs- und Endadresse uebergeben werden.
  int A[] = {11, 12, 2014, 314, 42};
  vector<int> v2(&A[0], &A[0]+5);


  // Ausgeben aller Werte
  cout << "Im Vektor v befinden zunächst sich folgende Werte:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl << endl;

  // Löschen des letzten Elements
  v.pop_back();
  
  // Ausgabe des 3. Elements,
  cout << "3. Element: " << v.at(2) << endl;

  // Hinzufügen der Zahl 2818 an das Ende des Vectors
  v.push_back(2818);

  // Ausgabe der Summe aller Elemente des Vectors
  int sum = 0;
  for (int i = 0; i < v.size(); i++)
    sum += v[i];
  cout << endl << "Die Summe aller Elemente des Vectors ist: " << sum << endl;  
}

