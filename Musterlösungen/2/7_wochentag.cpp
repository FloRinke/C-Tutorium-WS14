#include <iostream>
using namespace std;

int main()
{
  int i;
  cout << "Bitte Zahl von 0-7 eingeben: ";
  cin >> i;

  string result;

  switch(i) {
     case 1 : result = "Montag"; break;
     case 2 : result = "Dienstag"; break;
     case 3 : result = "Mittwoch"; break;
     case 4 : result = "Donnerstag"; break;
     case 5 : result = "Freitag"; break;
     case 6 : result = "Samstag"; break;
     case 0 : 
     case 7 : result = "Sonntag"; break;
     default : result = "Kein gültiger Wochentag!";
  }

  cout << endl << result << endl;

  return 0;
}
