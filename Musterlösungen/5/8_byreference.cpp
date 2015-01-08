#include <iostream>

using namespace std;

int inc(int n);
int incref(int &n);

int main() {
  int num = 1;
  cout << "Die Variable hat den Wert " << num << endl;
  cout << "Um 1 erhöht hätte die Variable den Wert " << inc(num) << endl;
  cout << "Gespeichert ist aber immer noch der Wert " << num << endl;
  
  cout << "Wenn die Variable per Referenz übergeben wird, hat sie den Wert " << incref(num) << endl;
  cout << "Gespeichert ist nun der Wert " << num << endl;
}

int inc(int n) {
  n++;
  return n;
}
int incref(int &n) {
  n++;
  return n;
}