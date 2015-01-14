#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// Einlesen einer Zeichenkette von der Konsole
	string str;
	getline(cin,str);

	// Grossschreiben mit char-Arithmetik
	string upper = str;
	for(int i = 0; i < upper.size(); i++) {
		if(upper[i]> = 'a' && upper[i] <= 'z') 
		  upper[i] -= 32;
	}
	cout << upper << endl;

	// Kleindschreiben mit char-Arithmetik
	string lower = str;
	for(int i = 0; i < lower.size(); i++) {
		if(lower[i]> = 'A' && lower[i] <= 'Z') lower[i] += 32;
	}
	cout << lower << endl;


	// Das Gleiche mit funktionen aus der Standardbibliothek
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << str << endl;

	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str << endl;

	return 0;
}
