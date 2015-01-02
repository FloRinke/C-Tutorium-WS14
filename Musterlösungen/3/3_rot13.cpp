#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Inizialisieren der zu testenden Zeichenkette
	string str = "Haraqyvpure Hajnuefpurvayvpuxrvgfnagevro";

	// for-Schleife zum Durchlaufen der einzelnen Zeichen
	for(int i=0;i<str.size();i++)
	{
		// Auslassen von Leerzeichen
		if(str[i] == ' ') i++;

		// Zugriff auf zeichen mit []-Operator
		// Um ein ROT13 verschluesseltes zeichen zu entschluesseln wird 13 subtrahiert
		// Die Konvertierung char <-> int passiert automatisch
		str[i]-=13;

		// Falls der bereich des roemischen Alphabetes verlassen wird muss das Zeichen wieder in diesen Bereich verschoben werden
		// Hier werden Groß und kleinbuschstaben in einem Schritt behandelt
		if(str[i]<'A' || (str[i]<'a' && str[i]>=('a'-13))) 
		{
			// Die Verschiebung um die 26 Zeichen des romischen Alphabetes
			// siehe ASCII-Tabelle
			str[i]+=26;
		}
	}

	// Ausgeben der entschluesselten Zeichenkette
	cout << str << endl;

	return 0;
}
