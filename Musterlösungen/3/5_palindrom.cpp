#include <iostream>
#include <locale>

using namespace std;

int main()
{
	// Einlesen einer Zeichenkette von der Konsole
	string str;
	getline(cin,str);

	bool str_ist_palindrom = true;
	int i = 0;
	int j = str.size() - 1;
	
	while(i<j) {
	  // isalpha überprüft, ob ein Zeichen ein Buchstabe ist und ist Teil der C++-Standardbibliothek
	  while(!(isalpha(str[i]))) i++;
	  while(!(isalpha(str[j]))) j--;
	  
	  // isalpha überprüft, ob ein Zeichen ein Großbuchstabe ist und ist Teil der C++-Standardbibliothek
	  if(isupper(str[i])) str[i] += 32;
	  if(isupper(str[j])) str[j] += 32;

	  if(str[i] != str[j]) str_ist_palindrom = false;
	  
	  i++;
	  j--;
	}

	cout << "Die Eingegebene Zeichenkette ist ";
	if(str_ist_palindrom)  cout << "ein";
	else cout << "kein";
	cout << " Palindrom!\n";

	return 0;
}
