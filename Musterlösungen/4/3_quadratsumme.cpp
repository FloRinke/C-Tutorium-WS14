#include <iostream>

using namespace std;

int sumquad(int n) {
	if(1 == n) {
		return 1;
	} else {
		return n * n + sumquad(n - 1);
	}
}

int sumquad2(int n) {
	int value = 0;
	for(int i = 1; i <= n; ++i) {
		value += i*i;
	}
	return value;
}

int main() {
	// Einlesen des Parameters von der Konsole
	int n;
	cout << "Berechne Summe aller Quadrate von 1 bis n = ";
	cin >> n;
	
	
	// Berechne Quadratsumme auf zwei verschiedene Arten
	int sum_r = sumquad(n); //rekursiv
	int sum_i = sumquad2(n); //iterativ
	
	//Gib Ergebnis aus
	cout << "Rekursive Berechnung: => " << sum_r << endl;
	cout << "Iterative Berechnung: => " << sum_i << endl;

	return 0;
}
