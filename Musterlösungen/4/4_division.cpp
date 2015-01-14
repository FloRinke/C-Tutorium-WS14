#include <iostream>

using namespace std;

int division(int a, int b) {
	if(0 == b) {
		return 0;
	} else {
		return a/b;
	}
}

int main() {
	// Einlesen einer Zeichenkette von der Konsole
	int numer, denom;
	cout << "Zähler a := ";
	cin >> numer;
	cout << "Nenner b := ";
	cin >> denom;
	
	// Rufe Berechnungsfunktion auf
	int quotient = division(numer, denom);
	
	//Gib Ergebnis aus
	cout << "Quotient a/b = " << numer << " / " << denom << " = " << quotient << endl;
	//mit dem Rückgabetyp int ist nur eine Ganzzahl als Rückgabewert möglich
	//Nachkommastellen werden daher abgeschnitten
	return 0;
}
