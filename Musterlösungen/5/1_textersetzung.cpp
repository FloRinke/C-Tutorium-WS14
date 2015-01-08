#include <iostream>
#include <string>

using namespace std;

int main() {
  // Einlesen einer Zeichenkette von der Konsole
  string text;
  cout << "Geben Sie eine Zeile ein:" << endl;
  getline(cin, text);
  //oder um es nicht jedesmal neu eintippen zu müssen:
  //string text = "Frohe Weihnachten"
  
  text.replace(5, 12, "s neues Jahr");
  
  //Gib Ergebnis aus
  cout << "Der modifizierte Text lautet:" << endl;
  cout << text << endl;
  
  return 0;
}
