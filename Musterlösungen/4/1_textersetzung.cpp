#include <iostream>
#include <string>

using namespace std;

int main() {
	// Einlesen einer Zeichenkette von der Konsole
	string song;
	cout << "Geben Sie den Liedtext ein:" << endl;
	getline(cin, song);
	//oder um es nicht jedesmal neu eintippen zu müssen:
	//string song = "Rudolph the red-nosed reindeer had a very shiny nose"
	
	char choice;
	cout << "Wie soll Rudolph zukünftig heißen?" << endl;
	cout << "  a - Rudolph" << endl;
	cout << "  b - Reginald" << endl;
	cout << "  c - Rollo" << endl;
	choice = cin.get();
	
	// Ersetze Text
	switch(choice) {
	case 'a':
		//no change, do nothing
		break;
	case 'b':
		song.replace(song.find("Rudolph"), 7, "Reginald");
		break;
	case 'c':
		song.replace(song.find("Rudolph"), 7, "Rollo");
		break;
	default:
		cout << "Keine gültige Eingabe!" << endl;
		return 1;
	}
	
	//Gib Ergebnis aus
	cout << "Der modifizierte Liedtext lautet:" << endl;
	cout << song << endl;
	
	return 0;
}
