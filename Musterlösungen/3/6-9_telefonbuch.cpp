#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

enum Abteilung {
	Wache,
	Forschung,
	Geschaeftsfuehrung,
	Poststelle
};

struct eintrag {
	string name;
	string vorname;
	int telefonnummer;
	Abteilung abteilung;
	string raum;
};

int main() {
	vector<eintrag> telefonbuch(5);
	telefonbuch[0]= { "Vimes", "Samuel", 2110, Wache, "W05" };
	telefonbuch[1]=	{ "Ridculy",	"Mustrum",	3305,	Forschung,		"T45"	};
	telefonbuch[2]=	{ "Vetinari",	"Havelock",	1001,	Geschaeftsfuehrung,	"P100"	};
	telefonbuch[3]=	{ "von Lipwig",	"Moist",	1919,	Poststelle,		"W07"	};
	telefonbuch[4]=	{ "Nobbs",	"Cecil",	2114,	Wache,			"W08"	};

	
	cout.width(12);
	cout << left << "Name";
	cout.width(10);
	cout << left << "Vorname";
	cout.width(6);
	cout << left << "Tel.";
	cout.width(10);
	cout << left << "Abteilng";
	cout.width(5);
	cout << left << "Raum" << endl;
	for(int i=0;i<42;i++) cout << "-";
	cout << endl;
	for(int i=0;i<telefonbuch.size();i++) {
		cout.width(12);
		cout << left << telefonbuch[i].name;
		cout.width(10);
		cout << left << telefonbuch[i].vorname;
		cout.width(6);
		cout << left << telefonbuch[i].telefonnummer;
		cout.width(10);
		cout << left << telefonbuch[i].abteilung;
		cout.width(6);
		cout << left << telefonbuch[i].raum;
	       	switch(telefonbuch[i].abteilung) {
			case 0: cout << "Gefaerlich!!";
				break;
			case 2: cout << "Wichtig!!";
				break;
		}
		cout << endl;
	}
		
	return 0;
}
