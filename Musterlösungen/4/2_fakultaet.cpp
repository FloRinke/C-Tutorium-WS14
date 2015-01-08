#include <iostream>

using namespace std;

int fak(unsigned int n) {
	if(1 >= n) {
		return 1;
	} else {
		return n * fak(n - 1);
	}
}

int fak2(unsigned int n) {
	int value = 1;
	for(int i = n; i > 0; --i) {
		value *= i;
	}
	return value;
}

int main() {
	// Einlesen des Parameters von der Konsole
	int n;
	cout << "Berechne Fakultät von n = ";
	cin >> n;
	
	//Prüfe Eingabe
	if(n < 0) {
		cout << "Fehler: Die Fakultät ist nur für nicht-negative Zahlen definiert" << endl;
		return 1;
	}
	
	// Berechne Fakultät auf zwei verschiedene Arten
	int fak_r = fak(n); //rekursiv
	int fak_i = fak2(n); //iterativ
	
	//Gib Ergebnis aus (beide Varianten müssen das selbe Ergebnis haben!!)
	cout << "Rekursive Berechnung: n! = " << fak_r << endl;
	cout << "Iterative Berechnung: n! = " << fak_i << endl;

	return 0;
}
